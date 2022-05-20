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
		samp obj[2][3] = 
			{
			samp(10,20), samp(30,40), samp(50,60), 
			samp(70,80), samp(90,100), samp(110,120)
			};

		int i,j;
		
		for(i=0;i<2;i++)
			{
				for(j=0;j<3;j++)
					{
						cout << obj[i][j].get_a()<<" "<<obj[i][j].get_b()<<" - ";
					}
				cout<<endl;
			}
				
		return 0;
	}