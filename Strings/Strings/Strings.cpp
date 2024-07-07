#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string Num1;
	string Num2;
	int sum;
	int num1i;

	
	cout << "Please Enter Full Name: " << endl;
	getline(cin, fullName);
	cout << fullName << endl;

	cout << "Enter Number 1:";
	cin >> Num1;

	cout << "Enter Number 2:";
	cin >> Num2;

	sum = stoi(Num1) * stoi(Num2);

	


	cout << "the Lenght of Full Name is : " << fullName.length() << endl;
	cout << "the characters at 0 2 4 5 6 is : " << fullName[0] << fullName[2] << fullName[4] << fullName[5] << fullName[6] << endl;
	cout << "concatenation of Number 1 and Number 2 is :" << Num1 + Num2 << endl;

	cout << "Number 1 * Number 2 is: " << sum  <<  endl;

}
