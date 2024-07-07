#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    const float PI = 3.14;

    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;

    float P = (a + b + c) / 2;
    float Y = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    float area = PI * Y * Y;

    cout << "the circle area circle described around an arbitrary triangle is: " << area << endl;
}
