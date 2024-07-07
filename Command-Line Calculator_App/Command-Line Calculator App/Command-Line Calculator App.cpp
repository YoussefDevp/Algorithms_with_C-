#include <iostream>
using namespace std;

int main()
{
	char Addition = '+';
	char subtraction = '-';
	char multiplication = '*';
	char division = '/';

	
	int numberOne;
	int numberTow;
	char Operator;
	double result;



	do {
		cout << "************************" << endl;
		cout << "Enter the First Number: " << endl;
		cout << "************************" << endl;
		cin >> numberOne;

		cout << "************************" << endl;
		cout << "choose a valid operator: " << endl;
		cout << "************************" << endl;
		cin >> Operator;

		cout << "************************" << endl;
		cout << "Enter the Second Number: " << endl;
		cout << "************************" << endl;
		cin >> numberTow;
	

		if (cin.fail()) {
			cout << "That was not Number." << endl;
			return -1;
		}

		if (Operator != '-' && Operator != '+' && Operator != '/' && Operator != '*') {
			cout << " wrong operator: " << endl;
		}



		
	} while (Operator != '-' && Operator != '+' && Operator != '/' && Operator != '*');
	
  
   

  
   
    if (Operator == '-') {
	   result = numberOne - numberTow;

   }
   else if (Operator == '+') {
	   result = numberOne + numberTow;

   }
   else if (Operator == '*') {
	   result = numberOne * numberTow;

   }
   else if (Operator == '/') {
	   result = numberOne / numberTow;

   }

   cout << "************************" << endl;
   cout << "***Result: "<<result<<" ***" << endl;
   cout << "************************" << endl;

   return 0;
}
