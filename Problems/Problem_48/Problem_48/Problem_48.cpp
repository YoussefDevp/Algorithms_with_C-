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

    cout << "Enter how many months you need to settle the loan : ";
    cin >> NumberOfmonths;

    MonthlyPayment = LoanAmount / NumberOfmonths;


    cout << "the monthly installment amount to settle the loan: " << MonthlyPayment << "$" << endl;
    cout << "**************************************";


}
