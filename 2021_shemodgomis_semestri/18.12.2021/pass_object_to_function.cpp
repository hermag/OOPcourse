#include <iostream>
using namespace std;

class samp {
    int i;
public:
    samp(int n) {i=n;}
    void set_i(int n) {i=n;}
    int get_i() const {return i;}
};

int sqr_it(const samp& o)
{
    return o.get_i()*o.get_i();
}

samp some_funct(samp o)
{
    return o;
}

int main()
{
    samp a(10), b(2);
    cout<<sqr_it(a)<<endl<<sqr_it(b)<<endl;
    return 0;
}