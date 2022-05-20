#include <iostream>
using namespace std;

void PrintArray(int a[5][4])
{
    int i,j;
    cout<<"vbechdav gadmocemul masivs"<<endl;
    for (i=0; i<5; i++)
    {
        for (j=0; j<4; j++)
            {
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
    }
}

int main()
{
    int a[5][4],i,j;
    for (i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
            {
                cin>>a[i][j];
            }
    }
    PrintArray(a);
    return 0;
}