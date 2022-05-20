/*
დაწერეთ პროგრამა , რომელშიც შექმნით 10 ელემენტიან , მთელი რიცხვების
მასივს . მხოლოდ მიმთითებლების გამოყენებით გადასცემთ ფუნქციას , რომელიც
ამ მასივს დაალაგებს ზრდადობით .
*/
#include <iostream>
using namespace std;

void sorter(int *a, int n)
{
  int i,j,tmp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(*(a+i)>=*(a+j))
      {
        tmp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j)=tmp;
      }
    }
  }
}

int main()
{
  int i, arr[10];
  cout<<"შემოიტანეთ მასივის ელემენტები"<<endl;
  for (i=0;i<10;i++)
    cin>>arr[i];
  for (i=0;i<10;i++)
    cout<<" "<<arr[i];
  cout<<endl<<"ზრდადობით დალაგებული მასივი"<<endl;
  sorter(&arr[0],sizeof(arr)/sizeof(arr[0]));
  for (i=0;i<10;i++)
    cout<<" "<<arr[i];
  cout<<endl;
  return 0;
}
