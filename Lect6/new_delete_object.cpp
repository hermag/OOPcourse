#include <iostream>
using namespace std;

class samp
	{
		int i,j;
	public:
		void set_ij(int a, int b) 
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
		p = new samp;  //ობიექტისთვის მეხსიერების გამოყოფა
		if(!p)
			{
				cout<<"არ არის საკმარისი მეხსიერება!"<<endl;
				return 1;
			}
		p->set_ij(4,5);
		cout<<"ნამრავლი =: "<<p->get_product()<<endl;
		return 0;	
	}	