#include <iostream>
using namespace std;

class myclass
  {
    int a;
  public:
    myclass()
      {
        a=10;
      };
    void show()
      {
        cout<<a<<endl;
      }
  };

int main()
  {
    myclass a;
    a.show();
    return 0;
  }
