#include <iostream>
using namespace std;

double rectangleArea(int r) {

    float PI = 3.14;


    double area = PI * r * r;

    return area;
}

int main()
{
    cout << "rectangle Area is: " << rectangleArea(5);
}
