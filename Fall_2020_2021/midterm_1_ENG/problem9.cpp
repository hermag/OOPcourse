/*
 *Create the structure student, which should have the following attributes,
 *name, last name and age. Create the vector of this structure, and add three elements to it using the function.
 *Write another function which will get the vector and print it's content.
 */

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

void Print_Vector(const vector<student>& s)
{
	for (auto e : s)
		cout<<e.fname<<" "<<e.lname<<" "<<e.age<<endl;
}

int main()
{
	vector<student> s;
	string fname, lname;
	int age;
	for (int i=0; i<3; i++)
	{
		cout<<"Enter First Name of the Student"<<endl;
		cin>>fname;
		cout<<"Enter Last Name of the Student"<<endl;
		cin>>lname;
		cout<<"Enter age of the student"<<endl;
		cin>>age;
		s.push_back({fname, lname, age});
	}
	Print_Vector(s);
	return 0;
}
