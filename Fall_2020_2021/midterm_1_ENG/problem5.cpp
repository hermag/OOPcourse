/*
 *Write the program, which will ask you to enter three integer numbers,
 *let's assume that these integer numbers represent the sides of the triangle.
 *Pass these numbers to the function, using the constant link, and check if it is possible to make a triangle.
 *If it is possible to make a triangle, function should return true, if not false.
 *If it is possible to make a triangle out of these numbers, pass these numbers to another
 *function which should print what kind of triangle it is (equilateral, isosceles or scalene).
 *Print the type of the triangle.
 */

#include <iostream>
using namespace std;

bool check_if_triangle(const int& a, const int& b, const int& c)
{
	if (((a+b)>c) && ((c+b)>a) && ((a+c)>b))
		return true;
	else
		return false;
}

void get_triangle_type(const int& a, const int& b, const int& c)
{
	if (a == b && b == c && a == c)
		cout<<"Triangle is equilateral"<<endl;
	else if (a == b || b == c || a == c)
		cout <<"Triangle is isoscale"<<endl;
	else
		cout<<"Triangle is scalene"<<endl;
}

int main()
{
	int a, b, c;
	cout<<"Enter three integer numbers"<<endl;
	cin>>a>>b>>c;
	if (check_if_triangle(a,b,c))
		get_triangle_type(a,b,c);
	else
		cout<<""<<endl;
	return 0;
}
