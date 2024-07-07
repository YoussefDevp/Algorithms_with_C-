
#include <iostream>
using namespace std;

int main()
{
    int BillValue;


    cout << "Enter the Bill Value :" << endl;
    cin >> BillValue;

    float TotalBill = (BillValue * 1.1) * 1.16;

    cout << "the Total Bill is :" << TotalBill << "$" << endl;

}

