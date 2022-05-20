#include <iostream>
using namespace std;

bool martivoba(int a)
  {
    int i;
    for (i=2; i<a/2; i++)
      {
        if(a%i==0)
          return false;
      }
      return true;
  }


int main()
  {
    int a;
    do
      {
        cin>>a;
        if(martivoba(a))
          cout<<"martivia"<<endl;
        else
          cout<<"ar aris martivi"<<endl;
      } while(a!=-1);

      while(a!=-1)
        {
          cin>>a;
          if(martivoba(a))
            cout<<"martivia"<<endl;
          else
            cout<<"ar aris martivi"<<endl;
        }
}
