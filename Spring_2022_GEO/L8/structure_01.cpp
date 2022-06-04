#include <iostream>
#include <string>
using namespace std;

struct customer
{
    string fname;
    string lname;
    int age;
    string id;
    void get_vars()
    {
        cout<<fname<<endl<<lname<<endl<<age<<endl<<id<<endl;
    }
};

int main()
{
    customer c1;
    c1.fname = "Erekle";
    c1.lname = "Magradze";
    c1.age = 37;
    c1.id = "asdlakjsldaksjdla";
    c1.get_vars();
    return 0;
}