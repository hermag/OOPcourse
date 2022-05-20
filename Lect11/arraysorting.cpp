#include <iostream>
using namespace std;

int main()
  {
    int a[5] = {3,-5,4,1,0}, min;
    for(int i=0;i<5;i++)
      {
      min = a[i];
      for(int j=i+1;j<5;j++)
        {
          if(a[j]<min)
            {
              min=a[j];
              a[j]=a[i];
              a[i]=min;
            }
        cout<<endl<<"i="<<i<<endl<<"j="<<j<<endl;
        for (int i=0;i<5; i++)
            cout<<"a["<<i<<"] ";
        cout<<endl;
        for (int i=0;i<5; i++)
            cout<<a[i]<<" ";
        }
      }
    cout<<endl;  
    for (int i=0;i<5; i++)
        cout<<a[i]<<endl;
    return 0;
  }
