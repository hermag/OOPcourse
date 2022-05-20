#include <iostream>
using namespace std;

void problem_6(int *a, int len)
{
  int i,j, temp;
  for(i=0;i<len-1;i++)
  {
    for(j=i+1;j<len;j++)
    {
      if (*(a+i)>=*(a+j))
        {
          temp = *(a+i);
          *(a+i)=*(a+j);
          *(a+j)=temp;
        }
    }
  }
}

int main()
{
  int a[10]={-10,-20,30,0,-5,3,100,21,20,0},i,n;
  n=sizeof(a)/sizeof(a[0]);
  problem_6(&a[0],n);
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
