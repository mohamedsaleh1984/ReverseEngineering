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

/**
* Validate User Input, Prevent Overflow
*/
template<class T>
T static ValidateUserInput(string statement, T min, T max) {
	bool needInput = true;						//flag to check if we still need a valid number or not
	string userInput;							//fetch user input
	T returnValue;								//converted value from string to int.

	do {
		try {
			//printout the statement
			if (statement.length() > 0) {
				cout << statement << endl;
			}
			

			//fetch input from user
			std::getline(std::cin, userInput);

			returnValue = stoi(userInput);

			if (returnValue < min) {
				cout << "Invalid input, please enter non-negative number" << endl;
			}
			else if (returnValue > max) {
				cout << "Invalid input, Please enter a value between " << min << " and " << max << endl;
			}
			else {
				needInput = false;
				//convert string to integer
				returnValue = stoi(userInput);
			}

		}//in case of any excption remain in the loop until user enter valid number within the range.
		catch (...) {
			needInput = true;
			cout << "Invalid input, Please enter a value between " << min << " and " << max << endl;
		}

	} while (needInput);

	return returnValue;
}


int main() {
	int choice = 0;
	int num1= 0, num2 = 0;

	// Prevent Infinit loop
	for (int i = 0; i < 5; i++) {

		
		DisplayMenu();

		// get a value in specific range
		choice = ValidateUserInput("", 1, 4);
		
		// added exit options
		if (choice == 4) {
			exit(0);
		}

		// get valid range from the user
		num1 = ValidateUserInput("", INT_MIN, INT_MAX);
		num2 = ValidateUserInput("", INT_MIN, INT_MAX);

		// addition
		if (choice == 1) {
			// prevent overflow using long long range
			long long res = num1 + num2;
			cout << num1 << " + " << num2 << " = " << res << endl;
		}

		// subtraction
		if (choice == 2) {			
			// prevent overflow using long long range
			long long res = num1 - num2;
			// correct the usue
			cout << num1 << " - " << num2 << " = " << res << endl;
		}

		// multiplication 
		if (choice == 3) {
			// prevent overflow using long long range
			long long res = num1 * num2;
			// correct the sign 
			cout << num1 << " * " << num2 << " = " << res << endl;
		}
	}

	return 0;
}