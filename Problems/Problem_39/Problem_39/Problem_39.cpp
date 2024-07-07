#include <iostream>
using namespace std;

int main()
{
    short TotalBill;
    short CashPaid;
    short CashBack;


    cout << "Enter the Total Bill: ";
    cin >> TotalBill;
    cout << "Enter the Cash Paid: ";
    cin >> CashPaid;

    CashBack = CashPaid - TotalBill;

    cout << "Your Cash back is: " << CashBack << "$";

}



