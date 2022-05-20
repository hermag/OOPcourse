/*
 *Create the 5 elements array of strings and 5 elements array of integers,
 *pass these arrays to the function which should create the map out of them.
 *On the first place of the map, it should be the string, and on the second place should be the integer numbers.
 *Pass the map to another function which should print it's elements, one by one.
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

void print_the_map(const map<string, int>& m)
{
	 for (auto itr = m.begin(); itr != m.end(); ++itr) {
	        cout << itr->first<< '\t' << itr->second << '\n';
	    }
}

void form_the_map(const string& s, const int& n,  map<string, int>& m)
{
	int i;
	for (i=0; i<5; i++)
		{
			m.insert({*(&s+i), *(&n+i)});
			//m.insert({s[i],n[i]});
		}
	print_the_map(m);
}

int main()
{
	string s[5];
	int n[5];
	map<string, int> m;
	for (int i = 0; i<5; i++)
	{
		cin>>s[i]>>n[i];
	}
	form_the_map(s[0], n[0], m);
	return 0;
}

