/*
 * code.cpp
 *
 *  Created on: Mar 20, 2021
 *      Author: erekl
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student
{
	string fname;
	string lname;
	int age;
};

int main()
{
	student st1;
	vector<student> st;
	string s=" ", f_name, l_name;
	int a_ge;

	while (s!="?")
	{
		cout<<"shemoitanet studentis saxeli"<<endl;
		cin>>f_name;
		cout<<"shemoitanet studentis gvari"<<endl;
		cin>>l_name;
		cout<<"shemoitanet studentis asaki"<<endl;
		cin>>a_ge;
		st.push_back({f_name, l_name, a_ge});
		cin>>s;
	}

	for (int i=0; i < st.size(); i++)
	{
		cout<<"saxeli "<<st[i].fname<<" gvari "<<st[i].lname<<" gvari "<<st[i].age<<endl;
	}

	for (auto e : st)
	{
		cout<<"saxeli "<<e.fname<<" gvari "<<e.lname<<" gvari "<<e.age<<endl;
	}
	return 0;
}


