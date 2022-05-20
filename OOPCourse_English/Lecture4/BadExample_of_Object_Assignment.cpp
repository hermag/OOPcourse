#include <iostream>
using namespace std;

class myclass
  {
    int a,b;
  public:
    void set(int i, int j)
        {
          a=i;
          b=j;
        }
    void show()
        {
          cout<<a<<endl;
          cout<<b<<endl;
        }
  }

class yourclass
  {
    int a,b;
  public:
    void set(int i, int j)
        {
          a=i;
          b=j;
        }
    void show()
        {
          cout<<a<<endl;
          cout<<b<<endl;
        }
  }

int main()
    {
      myclass o1;
      yourclass o2;
      o1.set(10,4);
      o2=o1; //This will not work, though the structure of the classes are
             //identical!!!
             //For object assignment both objects should be derived from the
             //same class, which also guarantees that objects will have
             //identical structures.
      return 0;
    }
