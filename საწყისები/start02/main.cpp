#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(int& a, int& b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int main() {
    int x,y,tmp;
    cin>>x;
    cin>>y;
    cout<<endl<<"x="<<x<<endl;
    cout<<endl<<"y="<<y<<endl;
    swap(x,y);
    cout<<endl<<"x="<<x<<endl;
    cout<<endl<<"y="<<y<<endl;
    return 0;
}
