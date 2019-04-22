#include <iostream>
using namespace std;

struct zodiac
	{
	char name[50], zodiac[20];
	int btday[3];
	};

bool zodiac_validation(int btday[3], char zodiac[20])
	{
		if (((btday[1] == 1 && btday[0] >= 20) || (btday[1] == 2 && btday[0] <= 19)) && strcmp(zodiac, "Aquarius") == 0)
			return true;
		else if (((btday[1] == 2 && btday[0] >= 20) || (btday[1] == 3 && btday[0] <= 20)) && strcmp(zodiac, "Pisces") == 0)
			return true;
		else if (((btday[1] == 3 && btday[0] >= 21) || (btday[1] == 4 && btday[0] <= 19)) && strcmp(zodiac, "Aries") == 0)
			return true;
		else if (((btday[1] == 4 && btday[0] >= 20) || (btday[1] == 5 && btday[0] <= 20)) && strcmp(zodiac, "Taurus") == 0)
			return true;
		else if (((btday[1] == 5 && btday[0] >= 21) || (btday[1] == 6 && btday[0] <= 20)) && strcmp(zodiac, "Gemini") == 0)
			return true;
		else if (((btday[1] == 6 && btday[0] >= 21) || (btday[1] == 7 && btday[0] <= 22)) && strcmp(zodiac, "Cancer") == 0)
			return true;
		else if (((btday[1] == 7 && btday[0] >= 23) || (btday[1] == 8 && btday[0] <= 23)) && strcmp(zodiac, "Leo") == 0)
			return true;
		else if (((btday[1] == 8 && btday[0] >= 24) || (btday[1] == 9 && btday[0] <= 22)) && strcmp(zodiac, "Virgo") == 0)
			return true;
		else if (((btday[1] == 9 && btday[0] >= 23) || (btday[1] == 10 && btday[0] <= 22)) && strcmp(zodiac, "Libra") == 0)
			return true;
		else if (((btday[1] == 10 && btday[0] >= 23) || (btday[1] == 11 && btday[0] <= 21)) && strcmp(zodiac, "Scorpio") == 0)
			return true;
		else if (((btday[1] == 11 && btday[0] >= 22) || (btday[1] == 12 && btday[0] <= 21)) && strcmp(zodiac, "Sagittarius") == 0)
			return true;
		else if (((btday[1] == 12 && btday[0] >= 22) || (btday[1] == 1 && btday[0] <= 19)) && strcmp(zodiac, "Capricorn") == 0)
			return true;
		else
			return false;
		return false;
	}

bool leap_year_validation(int btday[3])
	{
		if ((btday[2] % 4 == 0 && btday[2] % 100 != 0) || btday[2] % 400 == 0)
			return true;
		else
			return false;
	}

bool date_validation(int btday[3])
	{
		bool is_leap_year = leap_year_validation(btday);
		if (btday[1] == 2 && is_leap_year && btday[1] > 29)
			return false;
		else if (btday[1] == 2 && !is_leap_year && btday[1] > 28)
			return false;
		else if ((btday[1] == 1 || btday[1] == 3 || btday[1] == 5 || btday[1] == 7 || btday[1] == 8 || btday[1] == 10 || btday[1] == 12) && is_leap_year && btday[1] > 31)
			return false;
		else if ((btday[1] == 4 || btday[1] == 6 || btday[1] == 9 || btday[1] == 11) && is_leap_year && btday[1] > 30)
			return false;
		else
			return true;
		return false;
	}

void get_number_of_people(zodiac signes[20], int month)
	{
		int i, persons=0;
		for (i = 0; i < 20; i++)
			{
			if (signes[i].btday[1] == month)
				{
					persons++;
					cout << "Name " << signes[i].name << " Zodiac Sign " << signes[i].zodiac << endl;
				}
			else
				continue;
			}
		cout << "There were " << persons << " persons born in " << month << " month" << endl;
	}

int main()
{
	int i=0, month, people=5;
	zodiac signes[5];
	while (i < people)
		{
			cout << "Enter name "<<endl;
			cin >> signes[i].name;
			cout << "Enter Zodiac" << endl;
			cin >> signes[i].zodiac;
			cout << "Now enter the birth date, in the following order:" << endl;
			cout << "Enter DAY, MONTH, YEAR." << endl;
			for (int j = 0; j < 3; j++)
				{
				cin >> signes[i].btday[j];
				}
			if (!date_validation(signes[i].btday))
			{
				cout << "You entered the wrong date, rerun the binary" << endl;
				return -1;
			}
			else
				cout << "You entered the valid date" << endl;

			if (zodiac_validation(signes[i].btday, signes[i].zodiac))
				cout << "You entered correct sign for the given birthday." << endl;
			else
				{
					cout << "You entered wrong sign for the given birthday." << endl;
					return -1;
				}
			i++;
		}
	cout << "Enter the month (integer number) you are interested in" << endl;
	cin >> month;
	get_number_of_people(signes, month);
	return 0;
}
