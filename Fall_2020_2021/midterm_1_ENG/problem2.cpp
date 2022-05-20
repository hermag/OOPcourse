/*
 * Write the program, which will ask you to input string from the keyboard, until you will enter the question mark, i.e. ? .
 * Once you type the question mark ?, you should call a function which should return the total size of the strings (you should
 * add strings to each other once doing input from the keyboard) that you have entered from the keyboard. Print the returned number.
 */

#include <iostream>
#include <string>
using namespace std;

void get_string_size(const string& s)
{
	cout<<"Total size of the strings you have entered is "<<s.length()<<endl;
}

int main()
{
	string input_string;
	string s;
	cin>>input_string;
	while(input_string!="?")
	{
		s += input_string;
		cin>>input_string;
	}
	get_string_size(s);
	return 0;
}
