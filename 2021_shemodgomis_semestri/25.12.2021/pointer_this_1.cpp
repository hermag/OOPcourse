#include <iostream>
#include <string>
using namespace std;

class inventory
{
    string item;
    double cost;
    int on_hand;
public:
    inventory(string i, double c, int oh)
    {
        this->item = i;
        this->cost = c;
        this->on_hand = oh;
    }
    void show();
};

void inventory::show()
{
    cout<<this->item;
    cout<<": $"<<this->cost;
    cout<<" On hand: "<<this->on_hand<<endl;
}

int main()
{
    inventory ob("wrench", 4.95, 4);
    ob.show();
    return 0;
}