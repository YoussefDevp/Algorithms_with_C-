#include <iostream>
using namespace std;

int main()


{
   
    string name;
    short age;
    string city;
    string country ;
    int mounthlySalary;
    bool isMarried;
    char gender;


    cout << "***************************" << endl;
    cout << "Enter Your Name" << endl;
    cin >> name;
    cout << "Enter Your Age" << endl;
    cin >> age;
    cout << "Enter Your gender" << endl;
    cin >> gender;
    cout << "Enter Your City" << endl;
    cin >> city;
    cout << "Enter Your Country" << endl;
    cin >> country;
    cout << "Enter Your mounthly Salary" << endl;
    cin >> mounthlySalary;
    cout << "are you married" << endl;
    cin >> isMarried;
    cout << "***************************" << endl;

    int yearSalary = mounthlySalary * 12;


    cout << "***************************"<< endl;
    cout << "Name     : " <<  name << endl;
    cout << "age      : " << age << endl;
    cout << "Gender  : " << gender << endl;
    cout << "City     : " << city << endl;
    cout << "Country  : " + country << endl;
    cout << "mounthly Salary  : " << mounthlySalary << endl;
    cout << "year Salary  : " << yearSalary << endl;
    cout << "Maried  : " << isMarried << endl;
    cout << "***************************"<< endl;
    


    
    short A ;
    short B ;
    short C ;

    cout << "Enter A" << endl;
    cin >> A;
    cout << "Enter B" << endl;
    cin >> B;
    cout << "Enter C" << endl;
    cin >> C;


    cout << A << " +" << endl;
    cout << B << " +" << endl;
    cout << C << endl;
    cout << "-------------------------" << endl;
    cout << "Total = " << A+B+C<< endl;
    cout << "-------------------------" << endl;
    
    

    
    short myAge;

    cout << "Enter your age" << endl;
    cin >> myAge;

    cout << "After 4 Years you will be = " << myAge + 4 << " years old" << endl;
    

}

