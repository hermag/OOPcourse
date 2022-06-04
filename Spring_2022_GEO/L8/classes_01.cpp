#include <iostream>
#include <string>
using namespace std;

class customer
{
    private:
        string fname;
        string lname;
        int age;
        string id;
    public:
        void set_vars(string f_name, string l_name, int age_, string id_)
        {
            fname = f_name;
            lname = l_name;
            age = age_;
            id = id_;
        }
        void get_vars()
        {
            cout<<fname<<endl<<lname<<endl<<age<<endl<<id<<endl;
        }
};

int main()
{
    customer c1;
    c1.set_vars("Erekle","Magradze",37,"01010101010101");
    c1.get_vars();
    return 0;
}