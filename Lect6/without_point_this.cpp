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
			item=i;
			cost = c;
			on_hand = o;
		}
		void show();
	};

void inventory::show()
	{
		cout << item;
		cout << ": $"<<cost;
		cout << " On hand: "<< on_hand << "$" <<endl;
	}	

int main()
	{
		inventory ob("Screwdriver", 4.95, 4);
		ob.show();
		return 0;
	}	