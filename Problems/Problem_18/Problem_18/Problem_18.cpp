#include <iostream>

using namespace std;

int main()
{

	int R;
	double area;
	const float PI = 3.14;

    cout << "Enter R: ";
    cin >> R;

	area = PI * (R * R);

	cout << "the circle area is: " << area << endl;

}
