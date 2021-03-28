#include <iostream>
#include <string>
using namespace std;

class test01{
    int age;
    string fname;
    string lname;
public:
    test01()
    {
        age=35;
        fname = "Erekle";
        lname = "Magradze";
    }
    test01(int a)
    {
        age = a;
        fname = "Someone";
        lname = "Someone";
    }
    test01(int a, string b, string c)
    {
        age = a;
        fname = b;
        lname = c;
    }
    void get_values()
    {
        cout<<"age "<<age<<endl;
        cout<<"First Name "<<fname<<endl;
        cout<<"Last Name "<<lname<<endl;
    }

    void set_values(int a, string b, string c)
    {
        age = a;
        fname = b;
        lname = c;
    }
};

int main() {
    test01 obj1, obj2(23), obj3(21, "First name", "Last name");
    obj1.get_values();
    obj2.get_values();
    obj3.get_values();
    return 0;
}
