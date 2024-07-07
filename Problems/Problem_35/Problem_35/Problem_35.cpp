#include <iostream>
using namespace std;

int main()

{
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
 
    cout << "***************************" << endl;
    cout << "Enter Pennys :" << endl;
    cin >> Penny;
    cout << "Enter Nickels :" << endl;
    cin >> Nickel;
    cout << "Enter Dimes :" << endl;
    cin >> Dime;
    cout << "Enter Quarters :" << endl;

    cin >> Quarter;
    cout << "Enter Dollars :" << endl;
    cin >> Dollar;
    cout << "***************************" << endl;

    float totalPennys = Penny + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    float totalDollars = totalPennys / 100;

    cout << "the total pennies :" << totalPennys << endl;
    cout << "the total Dollars :" << totalDollars << endl;


}

