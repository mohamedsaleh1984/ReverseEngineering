//============================================================================
// Name        : main.cpp
// Author      : mohamed saleh
// Date		   : 02/15/2025
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
	int num1= 0, num2 = 0;

	for (int i = 0; i < 5; i++) {
		DisplayMenu();
		cin >> choice;
		if (choice == 1) {
			cin >> num1;
			cin >> num2;
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		}

		if (choice == 2) {
			cin >> num1;
			cin >> num2;
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

		}
		if (choice == 3) {
			cin >> num1;
			cin >> num2;
			cout << num1 << " - " << num2 << " = " << num1 / num2 << endl;

		}
	}

	return 0;
}