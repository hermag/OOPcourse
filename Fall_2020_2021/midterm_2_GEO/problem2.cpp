/*
 *შექმენით სტრუქტურა სტუდენტი, რომელსაც ექნება სამი ცვლადი, სახელი, გვარი და ასაკი.
 *შექმენით კლასი, რომელსაც ექნება ერთი დახურული ტიპის ვექტორი, ხოლო ვექტორის ტიპად გამოიყენეთ სტრუქტურის ტიპის.
 *დაწერეთ მეთოდი, რომელიც შეავსებს დახურული ტიპის ვექტორს მნიშვნელობებით.
 *შექმენით ამ კლასის ობიქეტი (რამდენიმე ელემენტით) და დაბეჭდეთ ვექტორის,
 *მნიშვნელობები ცალკე ფუნქციის გამოყენებით (ფუნქციის და არა მეთოდის).
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student
{
	string fname;
	string lname;
	int age;
};

class student_class
{
	private:
		vector<student> s;
	public:
		void set_student_attributes(const string& new_fname, const string& new_lname, const int& new_age)
		{
			s.push_back({new_fname, new_lname, new_age});
		}
		const vector<student> get_student_vector()
		{
			return s;
		}
};

void Student_Class_Elements(student_class& s)
{
	vector<student> temp_vector;
	temp_vector = s.get_student_vector();
	for (auto i : temp_vector)
		cout<<i.fname<<" "<<i.lname<<" "<<i.age<<endl;
}

int main()
{
	string fname, lname;
	int age;
	student_class s;
	cin>>fname>>lname>>age;
	s.set_student_attributes(fname, lname, age);
	Student_Class_Elements(s);
	return 0;
}

