#include <iostream>
using namespace std;

class magazia
{
	private:
		float a;
		float b;
		float c;
		float d;
		float e;
	public:
		magazia()
		{
			a = 3.0;
			b = 2.9;
			c = 2.7;
			d = 2.89;
			e = 3.1;
			cout<<"CPP ოილი"<<endl;
			cout<<"SUPER       - "<<a<<endl;
			cout<<"PREMIUM     - "<<b<<endl;
			cout<<"REGULAR     - "<<c<<endl;
			cout<<"DIESEL      - "<<d<<endl;
			cout<<"LPG         - "<<e<<endl;
		}
		magazia(float x)
		{
			a = 0.8;
			b = 1.0;
			c = 1.5;
			cout<<"მეპურე ლერი"<<endl;
			cout<<"თონის      - "<<a<<endl;
			cout<<"ლაზური     - "<<b<<endl;
			cout<<"ლერის პური - "<<c<<endl;
		}
		magazia(float x, float y)
		{
			a = 6.0;
			b = 8.0;
			c = 12.0;
			cout<<"საშაურმე ვირი"<<endl;
			cout<<"პატარა     - "<<a<<endl;
			cout<<"საშუალო    - "<<b<<endl;
			cout<<"დიდი       - "<<c<<endl;
		}
};

int main()
{
	magazia obj1, obj2(2.0), obj3(3.0,4.0);
	return 0;
}



