#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student 
{
    string fname;
    string lname;
    int age;
};

struct citizen
{
    student s;
    string id;
};

int main()
{
    int a;
    vector<int> v;
    vector<student> s;
    student s1;
    citizen c1;
    s1.fname = "Petros";
    s1.lname = "Amirkhanyan";
    s1.age = 21;
    c1.s.fname = "Elene";
    c1.s.lname = "Ratiani";
    c1.s.age = 21;
    c1.id = "0011101010123";
    s.push_back({"Naniko","Meisrishvili",21});
    return 0;
}