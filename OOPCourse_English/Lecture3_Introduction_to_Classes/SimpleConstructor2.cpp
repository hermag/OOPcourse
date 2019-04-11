#include <iostream>
using namespace std;

class myclass
  {
    int a;
  public:
    int b;
    myclass(int x, int y)
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
