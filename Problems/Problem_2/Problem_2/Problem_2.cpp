#include <iostream>
using namespace std;


string EnterYouName() {
    string Name;
    cout << "Enter Your Name : ";
    cin >> Name;
    return Name;
}

int main()
{
    cout << "Your name is " << EnterYouName() ;
}

