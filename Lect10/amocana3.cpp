#include <iostream>
using namespace std;

class check
  {
    public:
      int argument;
      void signcheck()
        {
          if (argument>0)
            cout<<"ricxvi dadebitia"<<endl;
          else
            cout<<"ricxvi uaryopitia"<<endl;
        }
  };

class oddevencheck: public check
  {
    public:
      void oddeven()
        {
          if (argument>0 && argument%2==0)
            cout<<"ricxvi lucia"<<endl;
          else if (argument>0 && argument%2!=0)
            cout<<"ricxvi kentia"<<endl;
          else
            cout<<"ricxvi uaryofitia an 0"<<endl;
        }
  };

int main()
  {
    int n;
    cin>>n;
    check numb;
    numb.argument = n;
    numb.signcheck();
    oddevencheck numbtocheck;
    numbtocheck.oddeven();
    return 0;
  }
