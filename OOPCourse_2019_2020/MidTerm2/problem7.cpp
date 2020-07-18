#include <iostream>
using namespace std;

class problem_7
{
private:
  int a;
public:
  problem_7()
  {
    a=10;
  }
  problem_7(int p)
  {
    a=20;
  }
  problem_7(int p, int q)
  {
    a=30;
  }
  int get()
  {
    return a;
  }
};

int main()
{
  problem_7 ob1, ob2(55), ob3(55,77);
  cout<<"ob1 "<<ob1.get()<<endl;
  cout<<"ob2 "<<ob2.get()<<endl;
  cout<<"ob3 "<<ob3.get()<<endl;
  return 0;
}
