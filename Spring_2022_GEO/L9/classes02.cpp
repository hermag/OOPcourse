#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student {
    string fname;
    string lname;
    int age;
public:
    student (string f_name, string l_name, int a_ge)
    {
        fname = f_name;
        lname = l_name;
        age = a_ge;
    }
    void setter(string f_name, string l_name, int a_ge)
    {
        fname = f_name;
        lname = l_name;
        age = a_ge;
    }
    void getter()
    {
        cout<<fname<<" , "<<lname<<" , "<<age<<endl; 
    }
};

void PrintVector(vector<student> v)
{
    for (auto e : v)
    {
        e.getter();
    }
}


int main()
{
    student t("ერეკლე","მაღრაძე",37);
    int age;
    string fname, lname;
    t.getter();
    return 0;
}