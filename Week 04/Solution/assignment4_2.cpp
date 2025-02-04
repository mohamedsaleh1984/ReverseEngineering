#include <iostream>
using namespace std;
void main(){
	double a = 0, b = 3.14;
	cout << “Enter Radius:”<< endl;
	cin >> a;
	b = b * a * a * 10;
	cout << “The volume is: “ << b << endl;
}
