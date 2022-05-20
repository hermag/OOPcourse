#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct strtype {
    strtype(char *ptr);
    ~strtype();
    void show();
  private:
    char *p;
    int len;
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *)malloc(len + 1);
    if (!p)
    {
        cout<<"შეცდომა, მეხსიერების გამოყოფაში"<<endl;
        exit(1);
    }
    strcpy(p,ptr);
}

strtype::~strtype()
{
    cout<<"მეხსიერება დაცლილია"<<endl;
    free(p);
}

void strtype::show()
{
    cout<<p<<" - სიმბოლოების რაოდენობა "<<len<<endl;
}

int main()
{
    strtype s1("vamocmebt kods"), s2("oop-s kursi sainteresoa");
    s1.show();
    s2.show();
    return 0;
}