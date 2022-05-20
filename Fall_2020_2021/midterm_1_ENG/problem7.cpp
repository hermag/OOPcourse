/*
 *Create the vector of strings, fill the vector with strings, until you type two minus signs ("--").
 *Pass the vector to the function with constant link, this function should return true if the number
 *of elements in the vector is odd and false if the number is even or equal to 0.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool check_number_of_vector_elements(const vector<string>& v)
{
	if (v.size()%2!=0)
		return true;
	else
		return false;
	return false;
}

int main()
{
	string s;
	vector<string> v;
	cin>>s;
	while (s!="--")
	{
		v.push_back(s);
		cin>>s;
	}
	check_number_of_vector_elements(v);
	return 0;
}
