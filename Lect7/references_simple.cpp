#include <iostream>
using namespace std;

void f(int *n); //ფუნქციის პარამეტრად გამოყენებულია მიმთითებელი

int main()
	{
		int i = 0;
		f(&i);
		cout<<"i: "<<i<<endl;
		return 0;
	}

void f(int *n)
	{
		*n=100; //n არგუმენტისთვის მნიშვნელობის მინიჭება - 100
	}	