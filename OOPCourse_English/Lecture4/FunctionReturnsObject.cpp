//In this example instead of integers, chars, strings or structures,
//function will return an object as a result of it's execution.
#include <iostream>
#include <cstring> //library to operate with strings,
                   //for this particular example
                   //we will copy one string to another.
using namespace std;

class samp
  {
    char s[80];
  public:
    void show() {cout<<s<<endl;}
    void set(char *str) { strcpy(s, str);}
  };

samp input()
  {
    char s[80];
    samp str;

    cout<<"Enter the string: ";
    cin>>s;

    str.set(s);
    return str;
  }

int main()
    {
      samp ob;
      ob = input();
      ob.show();
      return 0;
    }
