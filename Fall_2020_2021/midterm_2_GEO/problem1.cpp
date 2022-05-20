/*
 *შექმენით კლასი მოქალაქე, რომელშიც იქნება 3 დახურული ცვლადი,
 *დაბადების თარიღი, საცხოვრებელი მისამართი, დაოჯახებულობის სტატუსი.
 *შექმენით მეთოდები, რომლის საშუალებითაც მიანიჭებთ და დააბრუნებთ
 *მნიშვნელობებს თითოეული დახურული ცვლადისთვის. შექმენით კლასის ობიექტი და ფუნქცია.
 *ფუნქციაში განახორციელეთ ამ ობიექტის დახურული ცვლადებისთვის მნიშვნელობების მინიჭებას.
 *(გაითვალისწინეთ რომ კოდი უნდა იყოს მაქსიმალურად ოპტიმიზირებული მეხსიერების გამოყენების
 *მხრივ, გამოიყენეთ სტატიკური ბმულები.)
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class citizen
{
	private:
		string dob;
		string address;
		bool marital_status;
	public:
		void set_dob(const string& new_dob)
		{
			dob = new_dob;
		}
		void set_address(const string& new_address)
		{
			address = new_address;
		}
		void set_marital_status(const bool& new_marital_status)
		{
			marital_status = new_marital_status;
		}
		string get_dob()
		{
			return dob;
		}
		string get_address()
		{
			return address;
		}
		bool get_marital_status()
		{
			return marital_status;
		}
};

void SetValues(citizen& c, const string& dob, const string& address, const bool& marital_status)
{
	c.set_dob(dob);
	c.set_address(address);
	c.set_marital_status(marital_status);
}

int main()
{
	string dob, address;
	bool marital_status;
	citizen c;
	cin >> dob >> address;
	cin >> marital_status;
	SetValues(c, dob, address, marital_status);
	return 0;
}

