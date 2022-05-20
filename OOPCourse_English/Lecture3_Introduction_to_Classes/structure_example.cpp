#include <iostream>
#include <string>
using namespace std;

struct stud
{
	string name;
	string lastname;
	int age;
};

int main()
{
	stud st1;
	cin>>st1.name>>st1.lastname>>st1.age;
	cout<<"სტუდენტის სახელია"<<st1.name<<endl;
	cout<<"სტუდენტის გვარია"<<st1.lastname<<endl;
	cout<<"სტუდენტის ასაკია"<<st1.age<<endl;
	return 0;
}