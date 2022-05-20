#include <iostream>
#include <math.h>
using namespace std;

class fartobi
{
	private: 
		float a;
		float b;
		float c;
	public:
		float area;
		float p;
		fartobi(float r)
			{
				a = r;
				area = 3.14 * a * a;
			}	
		fartobi (float x, float y)
			{
				a = x;
				b = y;
				area = a * b;
			}	
		fartobi (float x, float y, float z)
			{
				a = x;
				b = y;
				c = z;
				p = (a+b+c)*0.5;
				area = sqrt(p*(p-a)*(p-b)*(p-c)); 
			}		
		float get_area()
		{
			return area;
		}	
};

int main()
{
	fartobi obj1(3.0),obj2(2.0,5.0),obj3(3.0,4.0,5.0);
	cout<<"წრის ფართობია "<<obj1.get_area()<<endl;
	cout<<"მართკუთხედის ფართობია "<<obj2.get_area()<<endl;
	cout<<"სამკუთხედის ფართობია "<<obj3.get_area()<<endl;
	return 0;
}