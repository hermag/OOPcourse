#include <iostream>
using namespace std;

bool check_hour(int hours)
{
	if (hours >= 0 && hours <= 23)
		return true;
	else
		return false;
	return false;
}

bool check_minutes(int minutes)
{
	if (minutes >= 0 && minutes < 60)
		return true;
	else
		return false;
	return false;
}

bool check_seconds(int seconds)
{
	if (seconds >= 0 && seconds < 60)
		return true;
	else
		return false;
	return false;
}

int main()
{
	int hours1, hours2, minutes1, minutes2, seconds1, seconds2, timediff_hours, timediff_minutes, timediff_seconds;
	bool nextday = false;
	cout << "Enter the first time stamp in the following sequence HH, mm, ss" << endl;
	cout << "Enter hours and REMEMBER THAT HH should be in range 0 to 23:" << endl;
	cin >> hours1;
	if (!check_hour(hours1))
	{
		cout<< "Hours are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Hours are in valid range. Now enter minutes for first time stamp:" << endl;
	cout << "REMEMBER THAT minutes should be in range 0 to 60" << endl;
	cin >> minutes1;
	if (!check_minutes(minutes1))
	{
		cout << "Minutes are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Minutes are in valid range. Now enter seconds for first time stamp:" << endl;
	cout << "REMEMBER THAT seconds should be in range 0 to 60" << endl;
	cin >> seconds1;
	if (!check_seconds(seconds1))
	{
		cout << "Seconds are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Seconds are in valid range" << endl;
	cout << "Enter the second time stamp in the following sequence HH, mm, ss" << endl;
	cout << "Enter hours and REMEMBER THAT HH should be in range 0 to 23:" << endl;
	cin >> hours2;
	if (!check_hour(hours2))
	{
		cout << "Hours are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Hours are in valid range. Now enter minutes for first time stamp:" << endl;
	cout << "REMEMBER THAT minutes should be in range 0 to 60" << endl;
	cin >> minutes2;
	if (!check_minutes(minutes2))
	{
		cout << "Minutes are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Minutes are in valid range. Now enter seconds for first time stamp:" << endl;
	cout << "REMEMBER THAT seconds should be in range 0 to 60" << endl;
	cin >> seconds2;
	if (!check_seconds(seconds2))
	{
		cout << "Seconds are not in valid range" << endl;
		return 0;
	}
	else
		cout << "Seconds are in valid range" << endl;
	//Let's start time difference calculation.
	timediff_seconds = seconds2 - seconds1;
	if (timediff_seconds < 0)
	{
		timediff_seconds = 60 + timediff_seconds;
		timediff_minutes = minutes2 - minutes1 -1 ;
	}
	else
		timediff_minutes = minutes2 - minutes1;
	if (timediff_minutes < 0)
	{
		timediff_minutes = 60 + timediff_minutes;
		timediff_hours = hours2 - hours1 -1;
	}
	else
	{
		timediff_hours = hours2 - hours1;
	}
	if (timediff_hours < 0)
	{
		timediff_hours = 24 + timediff_hours;
		nextday = true;
	}
	cout << "Time difference: " << hours2 << ":" << minutes2 << ":" << seconds2 << "-" << hours1 << ":" << minutes1 << ":" << seconds1<<" = ";
	if (nextday)
		{
			cout << timediff_hours << ":" << timediff_minutes << ":" << timediff_seconds << endl;
			cout << "time stamp "<< hours2 << ":" << minutes2 << ":" << seconds2 <<" is from next day" << endl;
		}
	else
		{
			cout << timediff_hours << ":" << timediff_minutes << ":" << timediff_seconds << endl;
		}
	return 0;
}
