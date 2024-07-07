#include <iostream>
using namespace std;

int SwaptheTwoNumbers() {
    int A;
    int B;
    int C = 0;
    cout << "Enter A: " << endl;
    cin >> A;
    cout << "Enter B: " << endl;
    cin >> B;

    
    C = A;
    A = B;
    B = C;
    return A, B;

}

int main()
{
   cout << SwaptheTwoNumbers();
}
