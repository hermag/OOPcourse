#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student {
    string fname;
    string lname;
    int age;
public:
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
    vector<student> v;
    student t;
    int i=0, age;
    string fname, lname;
    while (i<5)
    {
        cout<<"შემოიტანეთ სტუდენტის სახელი, გვარი და ასაკი"<<endl;
        cin>>fname>>lname>>age;
        t.setter(fname, lname, age);
        v.push_back(t);
        ++i;
    }
    PrintVector(v);
    return 0;
}