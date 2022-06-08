////
// Participants: Josh Valerio, Tran Le, Timothy Crow
//               Nicholas Iseminger
// Section: CS&131 - 2830
// Program Name: COMBINED Group Work - Pointers Exercise part 1
// Description by Nicholas I: This program counts all letters, digits, and special characters
//				in a given string. It then prints the total on the screen.
////

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	// Used Timothy's naming structure for variables
	char cstrInput[500];
	int alphabets = 0, numbers = 0, specials = 0;

	// Used Tran Le's formatting to make the look program nicer
	cout << "\tCount the number of alphabets, numbers, and special characters\n\t";
	cout << setw(62) << setfill('-') << "-" << endl << endl;
	cout << "\tInput the string: ";

	// Utilized Nicholas' use of "sizeof". Neat operator!
	fgets(cstrInput, sizeof cstrInput, stdin);
	char* ptr = cstrInput;

	// Used Timothy's and Nicholas' while loop to edit Josh's
	while (*ptr != '\0') {
		if (isalpha(*ptr)) {
			alphabets++;
		}
		else if (isdigit(*ptr)) {
			numbers++;
		}
		else {
			specials++;
		}
		*ptr++;
	}

	cout << "\tNumber of letters: " << alphabets << endl;
	cout << "\tNumber of digits: " << numbers << endl;
	cout << "\tNumber of special characters: " << specials << endl << endl;

	system("pause");
	return 0;
}
/*
	Editor Josh V: I did my best in trying to use everyone's submitted code into the first exercise.
				   Although we may have used different methods in solving the activity, we all were able to 
				   end up with the same result. This group work should the importance of sharing code, as 
				   each following addition filled the gaps that the previous work may have missed.
	Document LAST EDITED: 12:12 PM June 6, 2021
*/