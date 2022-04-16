#include <iostream>
using namespace std;

void PrintAB(int a, int b)
{
    cout<<a<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<b<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    PrintAB(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}