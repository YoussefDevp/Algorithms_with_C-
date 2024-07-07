#include <iostream>
using namespace std;

int  SecondstoDaysHoursMinutesSeconds(int TotalSeconds) {
	int Remainder;
	int NumberOfHours;
	int NumberOfMinutes;
	int NumberOfSeconds;
	int NumberOfDays;

	

	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHour = 60 * 60;
	int SecondsPerMinute = 60;

	NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	NumberOfSeconds = Remainder;

	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;

	return 0;
}

int main()
{
	SecondstoDaysHoursMinutesSeconds(193535);
}
