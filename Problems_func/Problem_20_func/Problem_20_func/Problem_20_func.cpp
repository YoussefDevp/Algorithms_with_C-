#include <iostream>
using namespace std;

float rectangleArea() {

	float const PI = 3.14;
	int A;
	cout << "A :";
	cin >> A;
	int Y = A / 2;
	float Area = PI * (Y * Y);
	return Area;
}

int main()
{
    cout << "rectangle Area is: " << rectangleArea();
}
