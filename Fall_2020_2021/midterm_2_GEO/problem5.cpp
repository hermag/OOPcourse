/*
 *შექმენით სტრუქტურა სტუდენტი და მოქალაქე.
 *სტრუქტურა სტუდენტს უნდა ქონდეს შემდეგი ატრიბუტები, სახელი, გვარი და უნივერსიტეტის დასახელება სადაც სწავლობს,
 *სტრუქტურა მოქალაქეს უნდა ქონდეს ერთი ცვლადი, რომელიც იქნება სტრუქტურა სტუდენტის ტიპის,
 *ასევე ერთი ცვლადი, რომელშიც იქნება ჩაწერილი მოქალაქის დაბადების თარიღი და მეორე ცვლადი,
 *სადაც იქნება მითითებული თუ რამდენი ხანი ცხოვრობს აღნიშნული მოქალაქე მის ბოლო საცხოვრებელ მისამართზე.
 *შექმენით ფუნქცია, რომელიც შეავსებინებს მომხმარებელს სტრუქტურა მოქალაქის ყველა ველს და
 *ასევე შექმენით ფუნქცია, რომელიც დაბეჭდავს სტრუქტურა მოქალაქის ყველა ველს.
 */

#include <iostream>
#include <string>
using namespace std;

struct student
{
	string fname;
	string lname;
	string university;
};

struct citizen
{
	student s;
	string dob;
	int years_leaved_on_last_address;
};

void print_it(const citizen& c)
{
	cout<<c.s.fname<<" "<<c.s.lname<<" "<<c.s.university<<" "<<c.dob<<" "<<c.years_leaved_on_last_address<<endl;
}

void fill_the_values(const string& fname, const string& lname, const string& university, const string& dob, const int& years)
{
	citizen kein;
	kein.s.fname = fname;
	kein.s.lname = lname;
	kein.s.university = university;
	kein.dob = dob;
	kein.years_leaved_on_last_address = years;
	print_it (kein);
}

int main()
{
	string fname, lname, university, dob;
	int years;
	cout<<"შემოიტანეთ სახელი, გვარი, უნივერსიტეტი და დაბადების თარიღი"<<endl;
	cin>>fname>>lname>>university>>dob>>years;
	fill_the_values(fname, lname, university, dob, years);
	return 0;
}

