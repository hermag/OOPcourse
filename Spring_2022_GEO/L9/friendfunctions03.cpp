/*
 * friendfunctions01.cpp
 *
 *  Created on: Jun 25, 2022
 *      Author: erekl
 */
#include <iostream>
using namespace std;

class Box
{
private:
	int length;
public:
	Box()
	{
		length = 0;
	}
	friend int printLength(Box); //მეგობარი ფუნქციის გამოცხადება კლასის შიგნით
};

int printLength(Box b)
{
	b.length +=10;
	return b.length;
}

int main()
{
	int i,j;
	cin>>i>>j;
	Box b;
	cout<<"Length of box: "<<printLength(b)<<endl;
	return 0;
}
