#include <iostream>
#include <cmath>
using namespace std;

int area(int a, int b)
{
    cout<<"მართკუთხედის ფართობია "<<a*b<<endl;
    return a*b;
}

int area(int a, int b, int c)
{
    int p = (a+b+c)/2;
    cout<<"სამკუთხედის ფართობია "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"მართკუთხედის ფართობი "<<area(a,b)<<endl;
    cout<<"სამკუთხედის ფართობი "<<area(a,b,c)<<endl;
    return 0;
}