#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    private:
        char *p;
        int len;
    public:
        strtype(char *ptr);
        ~strtype();
        void show();
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *)malloc(len+1);
    if(!p) 
    {
        cout<< "Memory Allocation Error"<<endl;
        exit(1);
    }
    strcpy(p,ptr);
}

strtype::~strtype()
{
    cout<<p<<endl;
    cout<<"Memory cleanup"<<endl;
    free(p);
}
 void strtype::show()
 {
     cout<<p<<" - length: "<<len<<endl;
 }

 int main()
 {
     strtype s1("This is test"), s2("I Love the C++");
     s1.show();
     s2.show();
     return 0;
 }