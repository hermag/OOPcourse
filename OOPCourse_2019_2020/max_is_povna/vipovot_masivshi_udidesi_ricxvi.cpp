#include <iostream>
using namespace std;

int main()
{
	int a[10],i,max; //a[] - არის მასივის სახელი, i არის ციკლის იტერატორი, max არის ცვლადი რომელშიც ჩავწერთ მაქსიმალურ მნიშვნელობას
	cout<<"შემოიტანეთ მასივის ელემენტების მნიშვნელობები"<<endl;
	for (i=0;i<10;i++)
	{
		cin>>a[i];
	}
	max = a[0];
	for (i=1;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	cout<<"მასივის უდიდესი ელემენტია "<<max<<endl;
	return 0;
}