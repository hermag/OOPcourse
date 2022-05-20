/*
 *შექმენით კლასი, რომელსაც ექნება სამი დახურული ცვლადი, გასამგზავრებელი ქალაქი, დანიშნულების ქალაქი და მგზავრობის ხანგრძლივობა.
 *შექმენით მეთოდები, რომლის საშუალებითაც მიანიჭებთ, ამ დახურულ ცვლადებს მნიშვნელობებს და ასევე დაბეჭდავთ ამ ცვლადების მნიშვნელობებს.
 *გაითვალისწინეთ, რომ მგზავრობის ხანგრძლივობა უნდა იყოს ქალაქის დასახელებაში სიმბოლოების რაოდენობის ჯამი გამრავლებული 0.5-ზე.
 *ასევე გაითვალისწინეთ, რომ თუ მოხდება უკვე შექმნილი ობიექტისთვის, გასამგზავრებელი ან დანიშნულების ქალაქების მნიშვნელობების ცვლილება,
 *მაშინ ავტომატურად უნდა შეიცვალოს ქალაქებს შორის მგზავრობის ხანგრძლივობა.
 */

#include <iostream>
#include <string>
using namespace std;

class the_class
{
private:
	string dep_city;
	string dest_city;
	float duration;
	void set_duration()
	{
		duration = (dep_city.length()+dest_city.length())*0.5;
	}
public:
	void set_dep_city(const string& new_dep_city)
	{
		dep_city = new_dep_city;
		set_duration();
	}
	void set_dest_city(const string& new_dest_city)
	{
		dest_city = new_dest_city;
		set_duration();
	}
	string get_dep_city() const
	{
		return dep_city;
	}
	string get_dest_city() const
	{
		return dest_city;
	}
	int get_duration()
	{
		return duration;
	}
};

int main()
{
	the_class c;
	c.set_dep_city("Tbilisi");
	c.set_dest_city("Sokhumi");
	cout<<"Duration between Tbilisi and Sukhumi is "<<c.get_duration()<<" hours"<<endl;
	c.set_dest_city("Tskhinvali");
	cout<<"Duration between Tbilisi and Tskhinvali is "<<c.get_duration()<<" hours"<<endl;
	return 0;
}
