#include <iostream>
using namespace std;

double TaskDurationInSeconds() {

    int days;
    int hours;
    int minutes;
    int seconds;

    cout << "Enter the days :" << endl;
    cin >> days;
    cout << "Enter the hours :" << endl;
    cin >> hours;
    cout << "Enter the minutes :" << endl;
    cin >> minutes;
    cout << "Enter the seconds :" << endl;
    cin >> seconds;

    int totalDays = days * 24 * 60 * 60;
    int totalHours = hours * 60 * 60;
    int totalMinutes = minutes * 60;

    int TotalSeconds = seconds + totalDays + totalHours + totalMinutes;
    cout << "the Total of seconds is :" << TotalSeconds << endl;

    return 0;
}
int main() {

    TaskDurationInSeconds();

}
    
