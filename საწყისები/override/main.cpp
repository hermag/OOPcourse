#include <iostream>
int sum()
{
    return 5+10;
}

int sum(int x)
{
    return x+75;
}

int sum(int x, int y)
{
    return x+y;
}

int main() {
    using namespace std;
    int x=10, y=20;
    cout<<"sum() "<<sum()<<endl;
    cout<<"sum(10) "<<sum(10)<<endl;
    cout<<"sum(x,y) "<<sum(x,y)<<endl;
    return 0;
}
