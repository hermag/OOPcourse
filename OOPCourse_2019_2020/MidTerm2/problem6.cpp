#include <iostream>
using namespace std;

void sorter(int a[10])
{
  int i,j,tmp;
  for(i=0; i<9;i++)
  {
    for(j=i+1;j<10;j++)
    {
      if(a[i]>=a[j])
      {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
    }
  }
  for (i=0;i<10;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}

int main()
{
  int a[10]={-10,-20,30,0,-5,3,100,21,20,0};
  sorter(a);
  return 0;
}
