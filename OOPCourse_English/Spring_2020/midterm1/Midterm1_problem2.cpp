/*
Create a program, where we will have 4 functions. These functions should do
the following: First one should sum the numbers and return the sum, second
function should subtract second number from the first one and return the
remaining, third function should multiply the numbers and return the product,
the fourth one should divide second number of the first one and return the
result of the division.
*/
#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return a+b;
}

int diff(int a, int b)
{
  return a-b;
}

int prod(int a, int b)
{
  return a*b;
}

int division(int a, int b)
{
  return a/b;
}

int main()
{
  int a,b;
  cout<<"Enter integer number a "<<endl;
  cin>>a;
  cout<<"Enter integer number b "<<endl;
  cin>>b;
  cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum(a,b)<<endl;
  cout<<"Difference of "<<a<<" and "<<b<<" = "<<diff(a,b)<<endl;
  cout<<"Product of "<<a<<" and "<<b<<" = "<<prod(a,b)<<endl;
  cout<<"Division of "<<a<<" and "<<b<<" = "<<division(a,b)<<endl;
  return 0;
}
