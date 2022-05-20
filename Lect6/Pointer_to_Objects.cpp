#include <iostream>
using namespace std;

class samp 
	{
		int a; //დახურული/შიდა ტიპის ცვლადი, private-ის მიწერა არ არის საჭირო
		int b; //როდესაც შემდგომ გვაქვს public ტიპის ცვლადები.
	public:
		samp (int n, int m) { a=n; b=m; }
		int get_a() { return a; }
		int get_b() { return b; }
	};

int main()
	{
		samp obj[6] = 
			{
			samp(10,20), 
			samp(30,40), 
			samp(50,60), 
			samp(70,80), 
			samp(90,100), 
			samp(110,120)
			};

		int i;
		
		samp *p;

		p=obj; //ობიექტების მასივის პირველი ელემენტის მისამართის მიღება

		for(i=0;i<6;i++)
			{
				cout << p->get_a()<<" "<<p->get_b()<<endl;
				p++
			}

		return 0;
	}