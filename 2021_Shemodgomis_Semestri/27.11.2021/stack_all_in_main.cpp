#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    int tos=0;
    char stack[SIZE], temp;
    while (tos<SIZE)
    {
        cin>>temp;
        stack[tos]=temp;
        ++tos;
    }
    while (tos!=0)
    {
        tos--;
        cout<<stack[tos]<<endl;
    }
    return 0;
}
