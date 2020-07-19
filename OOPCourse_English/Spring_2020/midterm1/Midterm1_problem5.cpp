/*
Create function which will get an array as an argument and it will print out
the elements of this array.
To check and validate the code, create 5 elements array, pass it to function
and we should be able to see the printed out 5 elements. Function should be
void type, i.e. it should not return anything.
*/
#include <iostream>
using namespace std;

void print_array(int* a, int n)
{
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<endl;
  }
}

int main()
{
  const int array_size = 5;
  int a[array_size]={10,-20,3,0,19};
  print_array(a, sizeof(a)/sizeof(a[0]));
  return 0;
}
