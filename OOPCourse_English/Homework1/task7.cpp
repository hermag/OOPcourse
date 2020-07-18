#include<iostream>
using namespace std;

int main() {
   int year;
   cout<<"enter the year"<<endl;
   cin>>year;
   while (year!=0)
   {
     if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        cout<<year<<" is a leap year"<<endl;
     else
        cout<<year<<" is not a leap year"<<endl;
      cin>>year;
   }
   return 0;
}
