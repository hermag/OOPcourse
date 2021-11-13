/*
 *Write the program, which will ask you to enter four integer numbers,
 *write the function which will check if the four numbers can form the
 *rectangle or the square. Print the result, with clear text.
 */

#include <iostream>
using namespace std;

void check_if_triangle(int sides[4])
{
	if ((sides[0] == sides[1]) && (sides[1] == sides[2]) && (sides[2] ==  sides[3]))
		cout<<"These sides belong to square"<<endl;
	else if ((sides[0] == sides[2]) && ( sides[1] == sides[3]))
		cout<<"These sides belong to rectangle or to parallelogram"<<endl;
	else
		cout<<""<<endl;
}

int main()
{
	int sides[4];
	cout<<"Enter four integer numbers"<<endl;
	for (int i = 0; i<4; i++)
		cin>>sides[i];
	check_if_triangle(sides);
	return 0;
}
