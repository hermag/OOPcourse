#include <iostream>
using namespace std;

class samp 
	{
		int a; //დახურული/შიდა ტიპის ცვლადი, private-ის მიწერა არ არის საჭირო
			   //როდესაც შემდგომ გვაქვს public ტიპის ცვლადები.
	public:
		samp (int n) { a=n; }
		int get_a() { return a;}

	};

int main()
	{
		samp obj[5] = {10,20,30,40,50};
		int i;
		
		for(i=0;i<5;i++)
			cout << obj[i].get_a()<<endl;
		return 0;
	}