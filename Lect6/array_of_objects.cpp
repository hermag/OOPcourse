#include <iostream>
using namespace std;

class samp 
	{
		int a; //დახურული/შიდა ტიპის ცვლადი, private-ის მიწერა არ არის საჭირო
			   //როდესაც შემდგომ გვაქვს public ტიპის ცვლადები.
	public:
		void set_a(int n) { a=n; }
		int get_a() { return a;}

	};

int main()
	{
		samp obj[5];
		int i;

		for(i=0;i<5;i++)
			obj[i].set_a(i+1);
		for(i=0;i<5;i++)
			cout << obj[i].get_a()<<endl;
		return 0;
	}