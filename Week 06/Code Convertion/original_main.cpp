//============================================================================
// Name        : main.cpp
// Author      : mohamed saleh
// Date		   : 02/16/2025
//============================================================================
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void DisplayMenu() {
	cout << "----------------" << endl;
	cout << "- 1)Add -" << endl;
	cout << "- 2)Subtract -" << endl;
	cout << "- 3)Multiply -" << endl;
	cout << "- 4)Exit -" << endl;
	cout << "----------------" << endl;
}

int main() {
	int choice = 0;
	int num1 = 0, num2 = 0;
	// The program will run infinity since i value doens't increment.
	// not using DisplayMenu which leads to duplicate code.

	for (int i = 0; i < 5;) {
		cout << "----------------" << endl;
		cout << "- 1)Add -" << endl;
		cout << "- 2)Subtract -" << endl;
		cout << "- 3)Multiply -" << endl;
		cout << "- 4)Exit -" << endl;
		cout << "----------------" << endl;

		// There no check for user choice limit
		cin >> choice;

		if (choice == 1) {
			// no checks for user input range
			cin >> num1;
			cin >> num2;
			// wrong operation and wrong sign and also can cause overflow  
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		}

		if (choice == 2) {
			// no checks for user input range
			cin >> num1;
			cin >> num2;
			// wrong operation and wrong sign and also can cause overflow  
			cout << num1 << " - " << num2 << " = " << num1 + num2 << endl;

		}
		if (choice == 3) {
			// no checks for user input range
			cin >> num1;
			cin >> num2;
			// wrong operation and wrong sign and also can cause overflow  
			// NO check for values can cause overflow Or exception divide by zero
			cout << num1 << " - " << num2 << " = " << num1 / num2 << endl;
		}
	}

	return 0;
}