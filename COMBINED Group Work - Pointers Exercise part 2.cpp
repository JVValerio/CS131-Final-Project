////
// Participants: Josh Valerio, Tran Le, Timothy Crow
//               Nicholas Iseminger
// Section: CS&131 - 2830
// Program Name: COMBINED Group Work - Pointers Exercise part 2
////

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

void CStringTokenizer(char* str, char delim, vector<string>& result);
void sortalphabetically(vector <string>& s);
bool compare(string x, string y);

////
// Pointers Exercise - part 2 - Tokenizer
// Description by Nicholas: This program splits a string into tokens using pointers.
//              The user inputs a string and a character to split the string.
// Used a bit of code from each participant.
////
/*
int main() {
    char cstr[300], delimiter, blankInput = ' ';
    vector<char> tokens;
    int counter = 1;
    cout << "\n\t~~~String Tokenizer~~~\n";
    cout << "\t-----------------------------\n\n";
    cout << "\tInput the string: ";
    fgets(cstr, sizeof cstr, stdin);
    char* ptr = cstr;
    cout << "\tEnter a single delimiter: ";
    cin.get(delimiter);
    while (*ptr) {
        tokens.push_back(*ptr);
        *ptr++;
    }
    cout << "\tYour tokens are:\n\t" << counter++ << ".";
    for (char element : tokens) {
        if (element == delimiter) {
            cout << endl << "\t" <<counter++ << ".";
        }
        else {
            cout << element;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
*/

////
// Pointers Exercise - part 2 - Word Sorter
// Description by Josh: This program sorts a given amount of words from
//                      Z to A.
// Bulk of this code is from Timothy and Tran
////

int main() {
    int word_count = 0;
    cout << "\n\t~~~Sorting Words Alphabetically~~~\n";
    cout << "\t----------------------------------\n\n";
    cout << "\tHow many words do you want to sort? ";
    cin >> word_count;
    vector <string> words(word_count);

    for (int i = 0; i < word_count; i++) {
        cout << "\tEnter word #" << i + 1 << ": ";
        cin >> words[i];
    }
    cout << endl << endl;

    cout << "\t.:. Sorting your words..." << endl;
    sortalphabetically(words);

    cout << endl << endl;

    cout << "\tYour words sorted:" << endl;

    for (int i = 0; i < word_count; i++) {
        cout << "\t\t" << i + 1 << ". " << words[i] << endl;
    }
    cout << endl << endl << "\t";
    system("pause");
    return 0;
}
void sortalphabetically(vector<string>& s) {
    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = 0; j < s.size() - i - 1; j++) {
            if (compare(s[j], s[j + 1]))
                swap(s[j], s[j + 1]);
        }
    }
}
bool compare(string x, string y) {
    const char* a = x.c_str();
    const char* b = y.c_str();

    int min = (x.size() < y.size() ? x.size() : y.size());

    for (int i = 0; i < min; i++) {
        if (x[i] == y[i]) {
            continue;
        }
        return x[i] < y[i];
    }
    return x.size() < y.size();
}
