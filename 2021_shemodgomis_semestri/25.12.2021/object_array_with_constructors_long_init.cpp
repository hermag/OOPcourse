#include <iostream>
using namespace std;

class samp 
{
    int a;
public:
    samp(int n) { a = n; }
    int get_a() { return a; }
};

int main()
{   
    samp ob[4] = { samp(-1), samp(-2), samp(-3), samp(-4) };
    int i;
    for (i=0; i<4; i++) cout<<ob[i].get_a()<<endl;    
    return 0;
}