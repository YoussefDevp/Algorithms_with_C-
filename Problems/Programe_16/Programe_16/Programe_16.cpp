#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    double area;



    cout << "ENTER A :";
    cin >> a ;
    cout << "ENTER B :";
    cin >> b ;

    area = a * sqrt((b * b) - (a * a));


    cout << " rectangle area through diagonal and side area of rectangle: " << area << endl;


}
