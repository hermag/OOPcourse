#include <iostream>
#include <string>
using namespace std;

class m2p3
{
  private:
    int a;
    string b;
  public:
    m2p3()
      {
        a = 10;
        b = "Constructor without variables";
      }
    m2p3(int a_)
      {
        a = a_;
        b = "One variable constructor";
      }
    m2p3(int a_, string b_)
      {
        a = a_;
        b = b_;
      }
    void get()
    {
      cout<<"a="<<a<<" b="<<b<<endl;
    }
};

int main()
{
  m2p3 obj1, obj2(23), obj3(45,"Hello World");
  obj1.get();
  obj2.get();
  obj3.get();
  return 0;
}
