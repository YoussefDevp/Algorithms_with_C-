#include <iostream>
using namespace std;

int main()
{
	float const PI = 3.14;
	int A;


	cout << " to calculate Circle area inscribed in a square enter A" << endl;

	cout << "A :";
	cin >> A;

	int Y = A / 2;


	float Area = PI * (Y * Y);

	cout << "Circle area inscribed in a square is: " << Area << endl;

}
