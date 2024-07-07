#include <iostream>

using namespace std;


void printMyName() {
    cout << " Youssef Medmourh " << endl;
}


string printMyAge() {
    return  "26 years old ";
}

 int sumOfTowNumbers() {
     int x = 10;
     int y = 5;
     int sum = x * y;
    return sum;
}
 


int main()
{
    printMyName();
    cout << printMyAge() ;
    cout << sumOfTowNumbers();
    
}
