#include <iostream>
using namespace std;

double rectangleArea(int a, int d) {

    double area = a * sqrt(d * d - (a * a));

    return area;
}

int main()
{
    cout << "rectangle Area is: " << rectangleArea(5, 40);
}
