#include <iostream>
#include <string>
using namespace std;

class inventory
	{
		string item;
		double cost;
		int on_hand;
	public:
		inventory(string i, double c, int o)
		{
			this->item=i;
			this->cost = c;
			this->on_hand = o;
		}
		void show();
	};

void inventory::show()
	{
		cout << this->item;
		cout << ": $"<<this->cost;
		cout << " On hand: "<< this->on_hand << "$" <<endl;
	}	

int main()
	{
		inventory ob("Screwdriver", 4.95, 4);
		ob.show();
		return 0;
	}	