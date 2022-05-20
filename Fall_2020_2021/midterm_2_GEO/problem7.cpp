/*
 *შექმენით სტრუქტურა ბილეთი, რომელშიც იქნება მითითებული გასამგზავრებელი ქალაქის დასახელება,
 *დანიშნულების ქალაქის დასახელება და სამგზავრო ადგილის ტიპი. შექმენით კლასი, რომელსაც ექნება ერთი,
 *აღნიშნული სტრუქტურის ტიპის, დახურული ცვლადი. შექმენით კონსტრუქტორი, რომელიც თუ არ მიიღებს არგუმენტებს,
 *დაბეჭდავს რომ ბილეთი ვერ გაიცემა, გადატვირთეთ ეს კონსტრუქტორი ერთი სტრუქტურის ტიპის ცვლადი და მიანიჭეთ
 *დახურული ცვლადის მნიშვნელობებს, გადაცმეული სტრუქტურის მნიშვნელობები შესაბამისად.
 *შექმენით მეთოდი, რომელიც დაითვლის მგზავრობის ფასს (ქალაქების დასახელებაში სიმბოლოების რაოდენობების ჯამი
 *გამრავლებული 10-ზე) და დაბეჭდავს ამ ინფორმაციას, კლასის გარეთ მყოფი ფუნქციის გამოყენებით.
 */

#include <iostream>
#include <string>
using namespace std;

void calculate_travel_price(string city_a, string city_b)
{
	cout<<"Price for travel from the city "<<city_a<<" to the "<<city_b<<" is "<<(city_a.length()+city_b.length())*10<<endl;
}

struct bileti
{
	string dep_city;
	string dest_city;
	int sit_type; //either type 1, 2 or 3
};

class travel
{
private:
	bileti b;
public:
	travel()
	{
		cout<<"ბილეთის გაცემა შეუძლებელია"<<endl;
	}
	travel(bileti new_b)
	{
		b.dep_city = new_b.dep_city;
		b.dest_city = new_b.dest_city;
		b.sit_type = new_b.sit_type;
	}
	void get_travel_price()
	{
		calculate_travel_price(b.dep_city, b.dest_city);
	}
};

int main()
{
	travel t1, t2({"Tbilisi","Sokhumi",1});
	t2.get_travel_price();
	return 0;
}

