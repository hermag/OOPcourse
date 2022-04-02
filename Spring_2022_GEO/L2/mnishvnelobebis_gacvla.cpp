#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=5;
    b=6;
    cout<<"a="<<a<<" b="<<b<<endl;
    c=a;
    a=b; //a=6
    b=c; //b=5
    cout<<"a="<<a<<" b="<<b<<endl;
    a=a+b; //a=6+5
    b=a-b; //b=(6+5)-5=6
    a=a-b; //a=(6+5)-6=5
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}