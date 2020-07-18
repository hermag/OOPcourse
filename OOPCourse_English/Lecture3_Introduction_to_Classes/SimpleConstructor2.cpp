#include <iostream>
using namespace std;

class myclass
  {
    int a;
    float pi=3.14;
  public:
    int b;
    myclass(int x)
      {
        a=x;
        b=y;
      };
    myclass(int x, int y)
      {
        a=x;
        b=y;
      };
    myclass(int x, int y, int z)
      {
        a=x;
        b=y;
      };
    void show()
      {
        cout<<a<<endl;
      }
  };

int main()
  {
    myclass obj1(4, 5);
    obj1.show();
    cout<<"b="<<obj1.b<<endl;
    return 0;
  }
