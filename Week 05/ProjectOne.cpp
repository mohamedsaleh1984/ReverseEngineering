//============================================================================
// Name        : Project1.cpp
// Author      : mohamed saleh
// Date		   : 02/10/2025
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// I Used IDA to help me disassemble the code

string aHelloWelcomeTo = "Hello! Welcome to our Investment Company";
string aInvalidPasswor = "Invalid Password. Please try again";
string aWhatWouldYouLi = "What would you like to do?";
string aDisplayTheClie = "DISPLAY the client list (enter 1)";
string aChangeAClientS = "CHANGE a client's choice (enter 2)";
string aExitTheProgram = "Exit the program.. (enter 3)";
string aYouChose = "You chose ";
string aEnterYourUsern = "Enter your username: ";
string aEnterYourPassw = "Enter your password: ";
string a123 = "123";
string aClientSNameSer =
		"  Client's Name    Service Selected (1 = Brokerage, 2 = Retirement)";
string a1 = "1. ";
string a2 = "2. ";
string a3 = "3. ";
string a4 = "4. ";
string a5 = "5. ";
string aEnterTheNumber =
		"Enter the number of the client that you wish to change";
string aPleaseEnterThe =
		"Please enter the client's new service choice (1 = Brokerage. 2 = Retirement)";
string aSelected = " selected option ";
string name1 = "Bob Jones";
string name2 = "Sarah Davis";
string name3 = "Amy Friendly";
string name4 = "Johnny Smith";
string name5 = "Carol Spears";
int num1 = 1;
int num2 = 2;
int num3 = 1;
int num4 = 1;
int num5 = 2;

/**
 * Check user permission
 * */
int CheckUserPermission(void) {

	string str, pass;
	cout << aEnterYourUsern << endl;
	cin >> str;
	cout << aEnterYourPassw << endl;
	cin >> pass;
	if (pass == a123) {
		return 1;
	}
	return 2;
}

/**
 * Display Clients Info
 * */
void DisplayInfo(void) {
	cout << aClientSNameSer << endl;
	cout << a1 << name1 << aSelected << num1 << endl;
	cout << a2 << name2 << aSelected << num2 << endl;
	cout << a3 << name3 << aSelected << num3 << endl;
	cout << a4 << name4 << aSelected << num4 << endl;
	cout << a5 << name5 << aSelected << num5 << endl;
}

/**
 * Change Customer's Choice
 * */
void ChangeCustomerChoice(void) {
	int client = 0, newChoice = 0;
	cout << aEnterTheNumber << endl;
	cin >> client;
	cout << aPleaseEnterThe << endl;
	cin >> newChoice;
	if (client == 1) {
		num1 = newChoice;
	} else if (client == 2) {
		num2 = newChoice;
	} else if (client == 3) {
		num3 = newChoice;
	} else if (client == 4) {
		num4 = newChoice;
	} else if (client == 5) {
		num5 = newChoice;
	}
}

// Program Entry Point
int main() {
	cout << aHelloWelcomeTo << endl;
	int choice = 0;
	while(choice != 1) {
		choice = CheckUserPermission();
		if(choice != 1) {
			cout << aInvalidPasswor << endl;
		}
	}

	while(1) {
		cout << aWhatWouldYouLi << endl;
		cout <<aDisplayTheClie<< endl;
		cout <<aChangeAClientS << endl;
		cout << aExitTheProgram << endl;
		cin >> choice;
		cout << aYouChose << choice << endl;

		if(choice == 1) {
			DisplayInfo();
		}
		else if(choice ==2 )
		{
			ChangeCustomerChoice();
		}
		else if(choice == 3)
		{
			exit(0);
		}
	}

	return 0;
}
