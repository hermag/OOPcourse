/*Create 10 element array of integer numbers, enter the values of the arrays
using cin method. Sort these elements in ascending order.*/
#include <iostream>
using namespace std;

int main()
{
  const int array_size = 10;
  int a[array_size],i,j,tmp;
  cout<<"Enter 10 Element Integer Array Elements"<<endl;
  for (i=0;i<array_size;i++)
    cin>>a[i];
  cout<<"Here are the unsorted array elements"<<endl;
  for (auto x : a)
    cout<<x<<endl;
  for(i=0; i<array_size; i++)
      {
        for (j=i+1;j<array_size;j++)
        {
          if (a[i]>a[j])
          {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
          }
        }
      }
  cout<<"Here are the sorted array elements"<<endl;
  for (auto x : a)
    cout<<x<<endl;
  return 0;
}
