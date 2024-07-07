#include <iostream>

using namespace std;

int main()
{
	int TotalSeconds;
	int Remainder;
	int NumberOfHours;
	int NumberOfMinutes;
	int NumberOfSeconds;
	int NumberOfDays;

   cout << " Enter Read TotalSeconds :";
   cin >> TotalSeconds;

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

}
