/*
 * Write the program which will ask you to enter the integer numbers,
 * until you will enter the -32000. Once you enter the -32000,
 * you should pass to the function the sum of integer numbers to the function.
 * If the sum is positive function should print the following "Eventually you have a positive balance",
 * if the sum is negative, function should print "Eventually you have the negative balance".
 */

#include <iostream>
using namespace std;

void check_sum_sign(int& sum)
{
	if (sum<0)
		cout<<"Eventually you have a negative balance"<<endl;
	else if (sum>0)
		cout<<"Eventually you have a positive balance"<<endl;
	else
		cout<<""<<endl;
}

int main()
{
	int input_number, sum;
	sum = 0;
	cin>>input_number;
	while (input_number!=-32000)
	{
		sum +=input_number;
		cin >>input_number;
	}
	check_sum_sign(sum);
	return 0;
}

