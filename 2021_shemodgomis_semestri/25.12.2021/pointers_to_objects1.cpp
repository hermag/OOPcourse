#include <iostream>
using namespace std;

#define size 4

class samp
{
    int a,b;
public:
    samp(int n, int m) { a=n; b=m; }
    int get_a() { return a; }
    int get_b() { return b; }
};


int main()
{
    samp ob[size] = {samp(1,2), samp(3,4), samp(5,6), samp(7,8)};
    int i;
    samp *p;
    p = ob;
    for (i=0; i<size; i++) 
    {
        cout<<p->get_a()<<' '<<p->get_b()<<endl;
        p++;
    }    
    return 0;
}