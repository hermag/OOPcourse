#include <iostream>
using namespace std;

int main()
	{
		int *p;
		p = new int(9);

		if(!p) //იმ შემთხვევაში თუ არ არის საკმარისი მეხსიერება p იქნება 0,
			   //ანუ !0 იქნება ჭეშმარიტი გამოსახულება
			{
				cout<<"არ არის საკმარისი მეხსიერება!"<<endl;
				return 1;
			}

		cout<<"ეს არის ის მთელი რიცხვი რომელზეც მიუთითებს p: "<<*p<<endl;

		delete p; //მეხსიერების გამოთავისუფლება	

		/*
		დაპრგორამების ენა Java-ში
		არ დგას delete ოპერატორის საჭიროება
		რადგან მეხსიერების გამოთვისუფლებას Java
		ახორციელებს ავტომატურად, Garbidge Collector-ის
		გამოყენებით.
		*/
		return 0;
	}	