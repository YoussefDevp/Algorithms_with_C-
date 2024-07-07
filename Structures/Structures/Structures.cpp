#include <iostream>
using namespace std;


struct adress {
    string street;
    string city;
    string state;
    string country;
    short zipCode;
};

struct contact {
    string faceBook;
    string email;
    string phone;
    string website;
};

struct Person {
    string name;
    short age;
    int mounthlySalary;
    bool isMarried;
    char gender;
    contact contactInfo;
    adress adressInfo;
};





int main()
{


    Person person1;

    person1.name = "youssef";
    person1.age = 21;
    person1.gender = 'M';
    person1.isMarried = false;
    person1.mounthlySalary = 2500;

    person1.contactInfo.phone = "624737095";
    person1.contactInfo.email = "youssefmed212@gmail.com";
    person1.contactInfo.website = "youssefmedmourh.com";
    person1.contactInfo.faceBook = "youSsef";

    person1.adressInfo.street = "Paseo Altza 11, 3A";
    person1.adressInfo.city = "San Sebastian";
    person1.adressInfo.state = "Gipuzkoa";
    person1.adressInfo.zipCode = 20017;
    person1.adressInfo.country = "Spain";


    cout << "Personal Information:" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Married: " << person1.isMarried << endl;
    cout << "Monthly Salary: $" << person1.mounthlySalary << endl << endl;

    cout << "Contact Information:" << endl;
    cout << "---------------------" << endl;
    cout << "Phone: " << person1.contactInfo.phone << endl;
    cout << "Email: " << person1.contactInfo.email << endl;
    cout << "Website: " << person1.contactInfo.website << endl;
    cout << "Facebook: " << person1.contactInfo.faceBook << endl << endl;

    cout << "Address Information:" << endl;
    cout << "---------------------" << endl;
    cout << "Street: " << person1.adressInfo.street << endl;
    cout << "City: " << person1.adressInfo.city << endl;
    cout << "State: " << person1.adressInfo.state << endl;
    cout << "Zip Code: " << person1.adressInfo.zipCode << endl;
    cout << "Country: " << person1.adressInfo.country << endl;

    return 0;
}

