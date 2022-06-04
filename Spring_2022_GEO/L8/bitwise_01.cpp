#include <iostream>
using namespace std;

int main()
{
    unsigned int a=7; //111
    cout<<a<<endl; // 0000 0111 = 7
    a = a<<1;      // 0000 1110 = 14
    cout<<a<<endl; 
    a = a<<4;      // 0000 1110 = 14
    cout<<a<<endl; 
    a = a>>1;      // 0000 0111 = 7
    cout<<a<<endl;
    a = a>>1;      // 0000 0011 = 3
    cout<<a<<endl;
    a = a>>1;      // 0000 0001 = 1
    cout<<a<<endl; 
    a = a>>1;      // 0000 0000 = 0
    cout<<a<<endl; 
    
    return 0;
}
