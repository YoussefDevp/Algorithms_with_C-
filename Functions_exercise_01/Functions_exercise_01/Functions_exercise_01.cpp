#include <iostream>

using namespace std;


void enterNumber1() {
    cout << "enter Number 1: " << endl;
}

void enterNumber2() {
    cout << "enter Number 2: " << endl;
}

string printMyAge() {
    return  "26 years old ";
}

int sumOfTowNumbers() {
    int Num1;
    enterNumber1();
    cin >> Num1;
    int Num2;
    enterNumber2();
    cin >> Num2;
    int sum = Num1 * Num2;
    return sum;
}



int main()
{
    
        cout << sumOfTowNumbers() << endl;

}
