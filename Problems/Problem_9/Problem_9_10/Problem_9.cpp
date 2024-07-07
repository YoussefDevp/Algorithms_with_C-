#include <iostream>
using namespace std;


int main()
{

    short markOne;
    short markTow;
    short markTree;
    short average;

    cout << "Enter Mark 1: " << endl;
    cin >> markOne;
    cout << "Enter Mark 2: " << endl;
    cin >> markTow;
    cout << "Enter Mark 3: " << endl;
    cin >> markTree;

    average = (markOne + markTow + markTree) / 3;

    /* if (average >= 50) {
        cout << average << " PASS: " << endl;
    }
    else {
        cout << " FAIL " << endl;
    }*/

    cout << average << endl;
}

