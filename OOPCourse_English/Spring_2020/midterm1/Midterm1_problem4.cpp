#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
  int* tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a,b;
  cout<<"Input a and b"<<endl;
  cin>>a>>b;
  cout<<"a="<<a<<" b="<<b<<endl;
  swap(a,b);
  cout<<"a="<<a<<" b="<<b<<endl;
  return 0;
}
