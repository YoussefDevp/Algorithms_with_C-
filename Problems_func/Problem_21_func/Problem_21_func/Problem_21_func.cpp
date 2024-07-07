#include <iostream>
using namespace std;


double circleArea() {
    int l;
    float const PI = 3.14;
    cout << "l: ";
    cin >> l;

    double Area = (l * l) / (PI * 4);
    return Area;
}

int main()
{
    cout << "circle Area is: " << circleArea() << endl;
}
