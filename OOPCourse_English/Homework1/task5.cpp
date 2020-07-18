#include <iostream>
using namespace std;

struct thedate
  {
    int day;
    int month;
    int year;
  };

bool yearleapcheck(int year)
    {
      if ((year % 4 ==0 && year % 100 !=0) || year % 400 == 0)
        return true;
      else
        return false;
    }

int daymonthcheck(int month, int year)
    {
      bool leap = yearleapcheck(year);
      int toplimit;
      switch(month)
        {
        case 1:
          return 31;
        case 2 :
          if (leap)
            return 29;
          else
            return 28;
        case 3 :
          return 31;
        case 4 :
          return 30;
        case 5 :
          return 31;
        case 6 :
          return 30;
        case 7 :
          return 31;
        case 8 :
          return 31;
        case 9 :
          return 30;
        case 10 :
          return 31;
        case 11 :
          return 30;
        case 12 :
          return 31;
        default:
          return -1;
        }
    }

int main()
  {
    thedate date;
    int daylimit;
    cout<<"Enter the date in the following order Year, Month and Day"<<endl;
    cout<<"Keep in mind that dd should be in the range from 1 to 28, 29, 30 or 31 according to month"<<endl;
    cout<<"Keep in mind that mm should be in the range from 1 to 12"<<endl;
    cout<<"Enter the YEAR"<<endl;
    cin>>date.year;
    cout<<"Enter the Month"<<endl;
    cin>>date.month;
    daylimit = daymonthcheck(date.month, date.year);
    if (daylimit==-1)
      {
        cout<<"You entered invalid month, re-run the binary!"<<endl;
        return 2;
      }
    else
      cout<<"You entered correct date"<<endl;
    cout<<"Enter the Day"<<endl;
    cin>>date.day;
    if (date.day>daylimit)
      {
        cout<<"You entered invalid date. Rerun the binary"<<endl;
        return 2;
      }
    else
        cout<<"You entered correct day"<<endl;
    cout<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
    return 0;
  }
