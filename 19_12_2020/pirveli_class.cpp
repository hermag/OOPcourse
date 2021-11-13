#include <iostream>
#include <string>
#include <vector>
using namespace std;

class employee
{
	private:
		float hourly_rate = 5.7;
	public:
		string first_name, last_name;
		int hours_worked;
		void set_hourly_rate(float hr)
		{
			if(hr<=0)
				cout<<"საათობრივი ანაზღაურება ვერ იქნება არადადებითი!"<<endl;
			else if (hr <= hourly_rate)
				cout<<"თუ თანამშრომლებს ხელფასს არ უმატებ, რა აზრი აქვს საათობრივი ანაზღაურების მნიშვნელობის შეცვლას???"<<endl;
			else
				hourly_rate = hr;
		}
		float get_sallary()
		{
			return hours_worked*hourly_rate;
		}
};


int main()
{
	vector<employee> e;
	employee E;
	float d;
	for (int i=0; i<3; i++)
	{
		cout<<"გთხოვთ შემოიტანოთ თანამშრომლის"<<endl;
		cout<<"სახელი "<<"გვარი "<<" ნამუშევარი საათების რაოდენობა"<<endl;
		cin>>E.first_name>>E.last_name>>E.hours_worked;
		cout<<"გთხოვთ შემოიტანეთ საათობრივი ანაზღაურება"<<endl;
		cin>>d;
		E.set_hourly_rate(d);
		e.push_back(E);
	}
	for (auto el : e)
	{
		cout<<el.first_name<<" "<<el.last_name<<" ანაზღაურება იქნება "<<el.get_sallary()<<endl;
	}
	return 0;
}

