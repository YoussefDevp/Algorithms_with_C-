#include <iostream>
using namespace std;

int main()
{

    short Number1;
    short Number2;
    short swap = 0;


    cout << "Enter the First Number" << endl;
    cin >> Number1;
    cout << "Enter the Seconds Number" << endl;
    cin >> Number2;

    swap = Number1;
    Number1 = Number2;
    Number2 = swap;

    cout << "Result :" << endl;
    cout << Number1 << endl;
    cout << Number2 << endl;




}

