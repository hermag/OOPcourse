#include <iostream>
#include <cstdio> //გვჭირდება sscanf()-თვის
using namespace std;

class date
{
    int day,month,year;
  public:
    date(char *str);
    date(int m, int d, int y)
      {
        day = d;
	month = m;
	year = y;
      }
    void show()
      {
        cout << month <<'/'<< day <<'/'<<year<<endl;
      }
};

date::date(char *str)
    {
      sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
    }

int main()
    {
      //კონსტრუქტორის გამოყენება სტრიქონული ტიპის თარიღისთვის
      cout<<"კონსტრუქტორის გამოყენება სტრიქონული ტიპის თარიღისთვის ";
      date sdate("11/1/92");
      sdate.show();
      //კონსტრუქტორის გამოყენება თარიღისთვის,რომელიც
      //გადაწოდებულია სამი მთელი ტიპის რიცხვის გამოყენებით.
      cout<<endl<<"კონსტრუქტორის გამოყენება თარიღისთვის,რომელიც გადაწოდებულია სამი მთელი ტიპის რიცხვის გამოყენებით. ";
      date idate(11,1,92);
      idate.show(); 
      return 0;
    }
