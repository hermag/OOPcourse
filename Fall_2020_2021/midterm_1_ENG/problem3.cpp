/*
 * Write the program, which will ask you to enter the strings until you will enter the "."
 * Once you enter the ".", you should call the function and pass to it an integer number,
 * which should be equal to the number of entered strings. If the number of entered strings is odd,
 * function should return false, otherwise it should return true.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool thefunction(int number_of_strings)
{
	if (number_of_strings%2==0)
		return true;
	else
		return false;
}

int main()
{
	vector<string> v;
	string s;
	cin>>s;
	while(s!=".")
	{
		v.push_back(s);
		cin>>s;
	}
	cout<<thefunction(v.size());
	return 0;
}
