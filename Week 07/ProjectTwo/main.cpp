//============================================================================
// Name        : main.cpp
// Author      : mohamed saleh
// Date		   : 02/15/2025
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int CLIENT_NUM = 5;
short service[5] = { 1, 2, 1, 1, 2 };
const string clientsName[CLIENT_NUM] = {
 "Bob Jones", "Sarah Davis","Amy Friendly","Johnny Smith", "Carol Spears"
};
const string num[CLIENT_NUM] = { "1. " ,"2. ","3. ","4. ","5. " };

const string aHelloWelcomeTo = "Hello! Welcome to our Investment Company";
const string aInvalidPasswor = "Invalid Password or Username. Please try again";
const string aEnterYourUsern = "Enter your username: ";
const string aEnterYourPassw = "Enter your password: ";
const string password = "123";
const string username = "M.S";

const string aWhatWouldYouLi = "What would you like to do?";
const string aDisplayTheClie = "DISPLAY the client list (enter 1)";
const string aChangeAClientS = "CHANGE a client's choice (enter 2)";
const string aExitTheProgram = "Exit the program.. (enter 3)";

const string aYouChose = "You chose ";
const string aSelected = " selected option ";
const string aClientSNameSer = "  Client's Name    Service Selected (1 = Brokerage, 2 = Retirement)";
const string aEnterTheNumber = "Enter the number of the client that you wish to change";
const string aPleaseEnterThe = "Please enter the client's new service choice (1 = Brokerage. 2 = Retirement)";

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
			cout << statement << endl;

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

/**
 * Check user permission
 * */
int CheckUserPermission(void)
{
	string username_input, pass;

	cout << aEnterYourUsern << endl;
	std::getline(std::cin, username_input);
	
	cout << aEnterYourPassw << endl;
	std::getline(std::cin, pass);

	if (pass == password && username_input == username)
		return 1;

	return 2;
}

/**
 * Display Clients Info
 * */
void DisplayInfo(void)
{
	cout << aClientSNameSer << endl;
	for (int i = 0; i < CLIENT_NUM; i++) {
		cout << num[i] << clientsName[i] << aSelected << service[i] << endl;
	}
}

/**
 * Change Customer's Choice
 * */
void ChangeCustomerChoice(void)
{
	short client = 0, newChoice = 0;

	client = ValidateUserInput(aEnterTheNumber, 1, 5);
	newChoice = ValidateUserInput(aPleaseEnterThe, 1, 2);

	if (client >= 1 && client <= 5 && (newChoice == 1 || newChoice == 2)) {
		service[client - 1] = newChoice;
	}
}

// Program Entry Point
int main()
{
	cout << aHelloWelcomeTo << endl;
	int choice = 0;
	while (choice != 1)
	{
		choice = CheckUserPermission();
		if (choice != 1)
		{
			cout << aInvalidPasswor << endl;
		}
	}

	while (1)
	{
		cout << aWhatWouldYouLi << endl;
		cout << aDisplayTheClie << endl;
		cout << aChangeAClientS << endl;
		cout << aExitTheProgram << endl;

		choice = ValidateUserInput("", 1, 3);
		
		cout << aYouChose << choice << endl;

		if (choice == 1)
		{
			DisplayInfo();
		}
		else if (choice == 2)
		{
			ChangeCustomerChoice();
		}
		else if (choice == 3)
		{
			exit(0);
		}
	}

	return 0;
}
