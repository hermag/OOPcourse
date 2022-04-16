//შემოვიტანოთ მასივი და დავალაგოთ მასივის ელემენტები ზრდადობით
#include <iostream>
using namespace std;

void PrintArray(int a[])
{
    cout<<"vbechdav gadmocemul masivs"<<endl;
    for (int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[5],i,j,t;
    cout<<"Shemoitanet masivis elementebi"<<endl;
    for (i=0; i<5; i++)
    {
        cin>>a[i];
    }
    PrintArray(a);

    for (i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            else 
            {
                continue;
            }
            PrintArray(a);
        }
    }
    return 0;
}