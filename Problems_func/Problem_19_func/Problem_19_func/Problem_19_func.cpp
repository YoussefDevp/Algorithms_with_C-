#include <iostream>
using namespace std;

float rectangleArea(int d) {

    float PI = 3.14;


    float area = (PI * d * d) / 4;

    return area;
}

int main()
{
    cout << "rectangle Area is: " << rectangleArea(10);
}
