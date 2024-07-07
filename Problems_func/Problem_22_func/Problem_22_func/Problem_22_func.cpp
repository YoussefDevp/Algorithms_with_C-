#include <iostream>
using namespace std;


double circleArea() {
	float const PI = 3.14;
	int A;
	int B;

	cout << "to calculate circle area Inscribed in an Isosceles Triangle enter A and B" << endl;
	cout << "A :";
	cin >> A;
	cout << "B :";
	cin >> B;

	double Area = (PI * B * B / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

int main()
{
    cout << "circle Area is: " << circleArea() << endl;
}
