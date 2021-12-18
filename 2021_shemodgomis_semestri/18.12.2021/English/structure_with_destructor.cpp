#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct strtype {
        strtype(char *n);
        ~strtype();
        void show();
    private:
        char *p;
        int len;
};

strtype::strtype(char *n)
{
    len = strlen(n);
    p = (char *)malloc(len+1);
    if(!p)
    {
        cout<<"Error during the memory allocation"<<endl;
        exit(1);
    }
    strcpy(p,n);
}

strtype::~strtype()
{
    cout<<"Freeing the memory out"<<endl;
    free(p);
}

void strtype::show()
{
    cout<<p<<" - length: "<<len;
    cout<<endl;
}

int main()
{
    strtype s1("This is the test"), s2("OOP cours is fun");
    s1.show();
    s2.show();
    return 0;
}