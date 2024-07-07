#include <iostream>
using namespace std;

int main()
{
	float const PI = 3.14;
	int A;
	int B;


	cout << "to calculate circle area Inscribed in an Isosceles Triangle enter A and B" << endl;
	cout << "A :";
	cin >> A;
	cout << "B :";
	cin >> B;


	float Area = (PI * B * B / 4) * ((2 * A - B) / (2 * A + B));

	cout << "circle area Inscribed in an Isosceles Triangle is: " << Area << endl;

}
