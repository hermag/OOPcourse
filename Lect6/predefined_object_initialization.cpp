#include <iostream>
using namespace std;

class samp
	{
		int i,j;
	public:
		samp(int a, int b) 
			{
				i=a;
				j=b;
			}
		int get_product()
			{
				return i*j;
			}	
	};

int main()
	{
		samp *p;
		p = new samp(10,20);  //ობიექტისთვის მეხსიერების გამოყოფა
		if(!p)
			{
				cout<<"არ არის საკმარისი მეხსიერება!"<<endl;
				return 1;
			}
		cout<<"ნამრავლი =: "<<p->get_product()<<endl;
		return 0;	
	}	