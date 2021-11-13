#include <iostream>
using namespace std;

class test
{

};

int main() {
    int a[5]={-2,10,-15,-12,3};
    cout<<"The size "<<sizeof(a)/sizeof(a[0])<<endl;
    return 0;
}
