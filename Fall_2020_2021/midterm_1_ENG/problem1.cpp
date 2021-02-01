/*
 * Write the program, which will allow you to input strings from the keyboard, until you will enter the exclamation mark (!).
 * After entering the exclamation mark(!), you should call a function, which should print the number of strings that you have
 * entered before typing the exclamation mark (!)
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void get_vector_size(const vector<string>& a)
{
	cout<<"You have entered "<<a.size()<<" strings!"<<endl;
}

int main()
{
	vector<string> a;
	string s;
	cin>>s;
	while(s!="!")
	{
		a.push_back(s);
		cin>>s;
	}
	get_vector_size(a);
	return 0;
}
