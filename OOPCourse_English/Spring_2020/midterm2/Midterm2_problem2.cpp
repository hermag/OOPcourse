#include <iostream>
using namespace std;

class simple
{
  private:
    int a;
  public:
    simple(int x)
    {
      a = x;
    }
    int get()
    {
      return a;
    }
};

int main()
{
  int a;
  cout<<"Input value for the class private variables"<<endl;
  cin >>a;
  simple obj(a);
  cout<<obj.get();
  return 0;
}
