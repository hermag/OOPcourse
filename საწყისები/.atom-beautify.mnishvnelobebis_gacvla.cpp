#include <iostream>
using namespace std;

int main()
{
  int x, y, z;
  cout<<"შემოიტანეთ x, y მნიშვნელობები"<<endl;
  cin>>x>>y;
  cout<<"x="<<x<<" y="<<y<<endl;
  z=x;
  x=y;
  y=z;
  cout<<"x="<<x<<" y="<<y<<endl;
  return 0;
}
