/*
ამ მაგალითში ვქმნით დინამიური ზომის მასივს.
მასივში ელემენტების რაოდენობას ვუთითებთ კლავიატურიდან და არა
მასივის აღწერისას.
*/
#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int *p;
    p=&n;
    cin>>n;
    int a[*p];
    for (i=0;i<n;i++)
    {
        a[i]=0;
    }    
    for (i=0;i<n;i++)
    {
        cout<<a[i];
    }    
    return 0;
}
