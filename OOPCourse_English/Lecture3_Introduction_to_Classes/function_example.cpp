#include <iostream>
using namespace std;

int get_max(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<get_max(x,y)<<endl;
	return 0;
}