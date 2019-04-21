#include <iostream>
using namespace std;

enum days { Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday };
const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct date
{
  int day, month, year;
};

bool leap_year_check(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return true;
  else
    return false;
}

bool year_validation(int year)
{
  if (year <= 0)
    return false;
  else
    return true;
}

bool month_validation(int month)
{
  if (month <= 0 || month > 12)
    return false;
  else
    return true;
}

bool day_validation(date the_date)
{
  bool is_leap_year = leap_year_check(the_date.year);
  if (is_leap_year && the_date.month == 2 && (the_date.day < 1 || the_date.day > 29))
    return false;
  else if (!is_leap_year && the_date.month == 2 && (the_date.day < 1 || the_date.day > 28))
    return false;
  else if ((the_date.month == 1 || the_date.month == 3 || the_date.month == 5 || the_date.month == 7 || the_date.month == 8 || the_date.month == 10 || the_date.month == 12) && (the_date.day < 1 || the_date.day > 31))
    return false;
  else if ((the_date.month == 4 || the_date.month == 6 || the_date.month == 9 || the_date.month == 11) && (the_date.day < 1 || the_date.day > 30))
    return false;
  else
    return true;
  return false;
}

int zeller(date thedate)
{
  bool leap_year = leap_year_check(thedate.year);
  if (thedate.year <= 0)
  {
    cout << "Year cannot be negative!" << endl;
    return -1;
  }
  if (thedate.month <= 0 && thedate.month >= 13)
  {
    cout << "You entered month in a wrong range!" << endl;
    return -1;
  }
  if (thedate.month == 2 && leap_year == true && (thedate.day <= 0 || thedate.day >= 30))
  {
    cout << "You entered day in a wrong range!" << endl;
    return -1;
  }
  else if (thedate.month == 2 && leap_year == false && (thedate.day <= 0 || thedate.day >= 29))
  {
    cout << "You entered day in a wrong range!" << endl;
    return -1;
  }
  else if ((thedate.month == 3 || thedate.month == 5 || thedate.month == 7 || thedate.month == 8 || thedate.month == 10 || thedate.month == 12) && (thedate.day <= 0 || thedate.day >= 32))
  {
    cout << "You entered day in a wrong range!" << endl;
    return -1;
  }
  else if ((thedate.month == 4 || thedate.month == 6 || thedate.month == 9 || thedate.month == 11) && (thedate.day <= 0 || thedate.day >= 31))
  {
    cout << "You entered day in a wrong range!" << endl;
    return -1;
  }
  //Zeller's algorithm for day of the week calculation
  if (thedate.month == 1)
  {
    thedate.month = 13;
    thedate.year--;
  }
  if (thedate.month == 2)
  {
    thedate.month = 14;
    thedate.year--;
  }
  int q = thedate.day;
  int m = thedate.month;
  int k = thedate.year % 100;
  int j = thedate.year / 100;
  int h = q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
  h = h % 7;
  switch (h)
  {
  case Saturday: return Saturday;
  case Sunday: return Sunday;
  case Monday: return Monday;
  case Tuesday: return Tuesday;
  case Wednesday: return Wednesday;
  case Thursday: return Thursday;
  case Friday: return Friday;
  }
  return -1;
}

bool check_date_validity(date date_to_check, int weekday)
{
  int days[9] = { 1,2,21,9,26,8,23,25,31 }, months[9] = { 1,1,3,4,5,8,11,12,12 } , i, n = 9;
  if (weekday == 1)
    return false;
  for (i = 0; i < n; i++)
  {
    if (date_to_check.day == days[i] && date_to_check.month == months[i])
      return false;
    else
      continue;
  }
  return true;
}

//int day_increment(int day, int month, int year, int weekday)
date day_increment(date current_date)
{
  int day = current_date.day;
  int month = current_date.month;
  int year = current_date.year;
  bool is_leap_year = leap_year_check(year);
  day += 1;
  if (is_leap_year && month == 2 && day > 29)
    {
      if (day == 30)
      {
        day = 1;
        month += 1;
      }
      else if (day == 31)
      {
        day = 2;
        month += 1;
      }
    }
  else if (!is_leap_year && month == 2 && day > 28)
    {
      if (day == 29)
      {
        day = 1;
        month += 1;
      }
      else if (day == 30)
      {
        day = 2;
        month += 1;
      }
    }
  else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day > 31)
    {
      if (day == 32)
      {
        day = 1;
        month += 1;
      }
      else if (day == 33)
      {
        day = 2;
        month += 1;
      }
    }
  else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
      if (day == 31)
      {
        day = 1;
        month += 1;
      }
      else if (day == 32)
      {
        day = 2;
        month += 1;
      }
    }
  else if (month == 12 && day > 31)
    {
      if (day == 32)
        {
          day = 1;
          month = 1;
          year += 1;
        }
      else if (day == 33)
        {
          day = 2;
          month = 1;
          year += 1;
        }
    }
  current_date.day = day;
  current_date.month = month;
  current_date.year = year;
  return current_date;
}

int countLeapYears(date d)
  {
    int years = d.year;
    // Check if the current year needs to be considered
    // for the count of leap years or not
    if (d.month <= 2)
      years--;
    // An year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    return years / 4 - years / 100 + years / 400;
  }

// This function returns number of days between two given dates
int getDifference(date date1, date date2)
{
  // COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1'
  // initialize count using years and day
  long int n1 = date1.year * 365 + date1.day;

  // Add days for months in given date
  for (int i = 0; i < date1.month - 1; i++)
    n1 += monthDays[i];

  // Since every leap year is of 366 days,
  // Add a day for every leap year
  n1 += countLeapYears(date1);

  // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'
  long int n2 = date2.year * 365 + date2.day;
  for (int i = 0; i < date2.month - 1; i++)
    n2 += monthDays[i];
  n2 += countLeapYears(date2);

  // return difference between two counts
  return (n2 - n1);
}

int main()
  {
    int weekday, i=1;
    bool datevaliditycheck;
    date the_date, next_date;
    //Start entering the date to start the semester for Calculus
    cout << "Enter the starting year, month and day!" << endl;
    cout << "Enter Year" << endl;
    cin >> the_date.year;
    if (year_validation(the_date.year))
      cout << "You entered valid year, now please enter month." << endl;
    else
      {
        cout << "Year cannot be 0 or negative, re-run the program." << endl;
        return -1;
      }
    cout << "Enter Month" << endl;
    cin >> the_date.month;
    if (month_validation(the_date.month))
      cout << "You have entered month in a valide range, now enter the day." << endl;
    else
      {
        cout << "Month should be in range of 1 and 12 not less or more. Re-run the code." << endl;
        return -1;
      }
    cout << "Enter Day" << endl;
    cin >> the_date.day;
    if (day_validation(the_date))
      cout << "You have entered day in a valide range." << endl;
    else
    {
      cout << "Day should be in the correct range - remember if it is a leap year and" << endl;
      cout << "you are entering days for Feb. it should not exceed 29." << endl;
      cout << "Re-run the binary and enter the correct day." << endl;
      return -1;
    }
    weekday = zeller(the_date);
    if (check_date_validity(the_date, weekday))
      {
        cout << endl << "----------------------------------------------------------------------------------------------" << endl;
        cout << "Date of the lecture " << i << endl << "Weekday ";
        i++;
        switch (weekday)
          {
            case 0: cout << "Saturday " << the_date.day << endl; break;
            case 1: cout << "Sunday " << the_date.day << endl; break;
            case 2: cout << "Monday " << the_date.day << endl; break;
            case 3: cout << "Tuesday " << the_date.day << endl; break;
            case 4: cout << "Wednesday " << the_date.day << endl; break;
            case 5: cout << "Thursday " << the_date.day << endl; break;
            case 6: cout << "Friday " << the_date.day << endl; break;
            default: cout << "Something went wrong"; break;
          }
        cout << "Month   " << the_date.month << endl;
        cout << "Year    " << the_date.year << endl;
        next_date = day_increment(the_date);
        next_date = day_increment(next_date);
      }
    if(i==1)
      next_date = day_increment(the_date);
    //cout << "Current date " << "day - " << the_date.day << " month - " << the_date.month << " year - " << the_date.year << endl;
    //cout << "Next date " << "day - " << next_date.day << " month - " << next_date.month << " year - " << next_date.year << endl;
    while (getDifference(the_date, next_date) < 93)
      {
        weekday = zeller(next_date);
        if (check_date_validity(next_date, weekday))
          {
            cout << endl << "----------------------------------------------------------------------------------------------" << endl;
            cout << "Date of the lecture " << i << endl;
            cout << "Weekday ";
            switch (weekday)
              {
                case 0: cout << "Saturday " << next_date.day << endl; break;
                case 1: cout << "Sunday " << next_date.day << endl; break;
                case 2: cout << "Monday " << next_date.day << endl; break;
                case 3: cout << "Tuesday " << next_date.day << endl; break;
                case 4: cout << "Wednesday " << next_date.day << endl; break;
                case 5: cout << "Thursday " << next_date.day << endl; break;
                case 6: cout << "Friday " << next_date.day << endl; break;
                default: cout << "Something went wrong"; break;
              }
            cout << "Month   " << next_date.month << endl;
            cout << "Year    " << next_date.year << endl;
            next_date = day_increment(next_date);
            i++;
          }
        next_date = day_increment(next_date);
      }
    return 0;
  }
