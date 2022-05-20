#include <iostream>
using namespace std;

void PrintArray(int b[])
{
    cout<<"Your array content"<<endl;
    for (int i=0; i<10; i++)
        {
            b[i]+=1;
            cout<<b[i]<<endl;
        }
}

int main()
{
    int a[10],i;
    for (i=0; i<10; i++)
    {
        cin>>a[i];
    }
    PrintArray(a[]);
    cout<<"Your array content"<<endl;
    for (i=0; i<10; i++)
        {
            cout<<a[i]<<endl;
        }
    return 0;
}