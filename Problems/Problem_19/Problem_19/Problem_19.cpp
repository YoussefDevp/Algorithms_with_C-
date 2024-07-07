#include <iostream>
using namespace std;

int main()
{
	float const PI = 3.14;
	int D;
	

	cout << " to calculate circle area through diameter enter D" << endl;

	cout << "D :";
	cin >> D;
	

	float Area = (PI * D * D) / 4;

	cout << "circle area through diameter is: " << Area << endl;

}
