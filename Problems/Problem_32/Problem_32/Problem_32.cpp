#include <iostream>
using namespace std;

int main()
{
    int Number; 
    int PowerOfNumber;
    int P = 1;
    int counter = 0;

  

    cout << "Enter a Number : ";
    cin >> Number;
    cout << "Enter the power of Number : ";
    cin >> PowerOfNumber;

    if (PowerOfNumber == 0) {
        cout << Number << " in Power of " << PowerOfNumber << " is : " << P << endl;
        } 
    
    do {
    
            P = P * Number;
            counter = counter + 1;
         
    } while (counter != PowerOfNumber);
   
    cout << Number << " in Power of " << PowerOfNumber << " is : " << P << endl;
 }

 
            
            
  
      
  

