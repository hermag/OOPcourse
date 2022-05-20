


#include <iostream>
using namespace std;

int main()
{
  int *i; 
  int a;
  i = &a; 
  cout<<"a="<<i<<endl;
  a=10;
  cout<<"a="<<a<<endl;
  *i = 20;
  cout<<"a="<<a<<endl;
  int **pi;
  pi = &i;
  cout<<pi<<endl;
  int ***ppi;
  ppi = &pi;
  cout<<ppi<<endl;
  cout<<***ppi<<endl;
  return 0;
}