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
		samp obj[2][3] = 
			{
			10,20,30,
			40,50,60
			};

		int i,j;
		
		for(i=0;i<2;i++)
			{
				for(j=0;j<3;j++)
					{
						cout << obj[i][j].get_a()<<" ";
					}
				cout<<endl;
			}
				
		return 0;
	}