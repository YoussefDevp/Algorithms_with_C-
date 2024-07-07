#include <iostream>

using namespace std;

int main()
{
    int LoanAmount;
    int MonthlyPayment;
    int NumberOfmonths;


    cout << "**************************************" << endl;
    cout << "Enter the Loan Amount : ";
    cin >> LoanAmount;

    cout << "Enter the Monthly Payment : ";
    cin >> MonthlyPayment;

    NumberOfmonths = LoanAmount / MonthlyPayment;


    cout << "the number of Months you should Pay : " << NumberOfmonths << endl;
    cout << "**************************************";
    

}
