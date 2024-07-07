#include <iostream>
#include <string>

using namespace std;

int main()
{

    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    int num_int = stoi(st1);
    float num_float = stof(st1);
    double num_double = stod(st1);

    string N1_string = to_string(N1);

    string N2_string = to_string(N2);

    string N3_string = to_string(N3);
    int N3_int = int(N3);





    cout << "ST1_int: " << num_int <<      endl;
    cout << "ST1_float: " << num_float <<  endl;
    cout << "ST1_double: " << num_double << endl;
    cout << "N1_string: " << N1_string <<  endl;
    cout << "N2_string: " << N2_string <<  endl;
    cout << "N3_string: " << N3_string <<  endl;
    cout << "N3_int: " << N3_int <<        endl;


    
}
