#include <iostream>
using namespace std;

# define SIZE 10

int push(char *a)
{
    char temp;
    int i=0;
    cin>>temp;
    while (temp!='!' && i<SIZE)
    {
        a[i]=temp;
        ++i;
        cin>>temp;
    }
    return i;
}

void pop(char *a, int i)
{
    --i;
    while (i>=0 && i<SIZE)
    {
        cout<<a[i]<<endl;
        --i;
    }
}

int main()
{
    int i=0;
    char a[SIZE];
    cout<<"Enter the value of the stack element"<<endl;
    i = push(a);
    cout<<"----------------"<<endl;
    pop(a, i);
    return 0;
}