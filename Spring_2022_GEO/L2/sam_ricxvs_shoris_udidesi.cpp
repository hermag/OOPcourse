#include <iostream>
using namespace std;

int main()
{
    int a, b, c; 
    cout<<"enter numbers"<<endl;
    cin>>a>>b>>c;
    if (a>=b && a>=c) 
    {
        cout<<"a is the biggest number"<<endl;
    } 
    else if(b>=c && b>=a)
    { 
        cout<<"b is the biggest number"<<endl;
    }
    else if(c>=a && c>=b)
    {
        cout<<"the biggest number is "<<c<<endl;
    }
    else
    {
        cout<<"all numbers are equal"<<endl;
    }
    return 0;
} 