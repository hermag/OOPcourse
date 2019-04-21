#include <iostream>
using namespace std;

struct thetime
  {
    int hours;
    int minutes;
    int seconds;
  };

bool hour_checker(int hour)
  {
    if (hour>=0 && hour<=23)
      return true;
    else
      return false;
  }

bool minute_second_checker(int minute_or_second)
  {
    if (minute_or_second>=0 && minute_or_second<=59)
      return true;
    else
      return false;
  }

int main()
  {
    thetime t1;
    cout<<"Enter hour - range should be from 0 to 23"<<endl;
    cin>>t1.hours;
    if (!hour_checker(t1.hours))
      {
        cout<<"Value entered for hours is in invalid range."<<endl;
        return 2;
      }
    cout<<"Enter minutes - range should be from 0 to 59"<<endl;
    cin>>t1.minutes;
    if (!minute_second_checker(t1.minutes))
      {
        cout<<"Value entered for minutes is in invalid range."<<endl;
        return 2;
      }
    cout<<"Enter seconds - range should be from 0 to 59"<<endl;
    cin>>t1.seconds;
    if (!minute_second_checker(t1.seconds))
      {
        cout<<"Value entered for seconds is in invalid range."<<endl;
        return 2;
      }
    cout<<"long totalsecs="<<t1.hours*3600+t1.minutes*60+t1.seconds<<endl;
    return 0;
  }
