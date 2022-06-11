#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class area
{
    public:
        area()
        {
            cout<<"ფართობი ნულის ტოლია"<<endl;
        }
        area(int a, int b)
        {
            calculate_rectangle_area(a,b);
        }
        area(int a, int b, int c)
        {
            calculate_triangle_area(a,b,c);
        }
        void calculate_rectangle_area(int a, int b);
        void calculate_triangle_area(int a, int b, int c);
};

void area::calculate_rectangle_area(int a, int b)
{
    cout<<"Rectangel Area is "<<a*b<<endl;
}

void area::calculate_triangle_area(int a, int b, int c)
{
    int p = (a+b+c)/2;
    cout<<"Triangle Area is "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
}


int main()
{
    area a, b(3,4),c(3,4,5);
    return 0;
}