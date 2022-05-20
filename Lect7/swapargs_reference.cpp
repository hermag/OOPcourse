#include <iostream>
using namespace std;

void swapargs(int &x, int &y);

int main()
	{
		int i, j;
		i = 10;
		j=19;
		cout<<"mimdinare mnishvnelobebi"<<endl;;
		cout<<"i: "<<i<<" , j: "<<j<<endl;
		swapargs(i,j); 
		cout<<"mnishvnelobebi adgilis shecvlis shemdeg"<<endl;
		cout<<"i: "<<i<<" , j: "<<j<<endl;
		return 0;
	}

void swapargs(int &x, int &y)
	{
		int t;
		t = x;
		x = y;
		y=t;
	}