#include <iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	//დავბეჭდოთ მასივის ელემენტები
	cout<<"მასივის ელემენტები"<<endl;
	for (int i=0; i<5; i++)
		cout<<a[i]<<endl;
	cout<<endl<<"მიმთითებლები მასივის ელემენტებზე"<<endl;
	int *p;
	p = &a[0];
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	//ბოლო ელემენტის წაკითხვა ინდექსის გამოყენების გარეშე
	p+=3;
	cout<<*p<<endl;
	return 0;
}
