#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Store;

class Shoes
{
    vector<string> v {"converse", "nike", "adidas"};
    int closing_time = 20;
    
    friend void open(Shoes, Store);
};

class Store
{
    vector<string> v {"apples", "bananas", "carrots"};
    
    int closing_time = 22;
    
    friend void open(Shoes, Store);
};

void open(Shoes a, Store b)
{
    int time_;
    cout<<"Enter time:"<<endl;
    cin>>time_;
    
    if (a.closing_time>=time_) 
    {
        cout<<"Shoe store is open"<<endl;
    }
    
    else
    {
        cout<<"Shoe store is closed"<<endl;
    }
    
    if (b.closing_time>=time_)
    {
        cout<<"Store is open"<<endl;
    }
    else
    {
        cout<<"Store is closed";
    }
}

int main()
{
    Shoes a;
    Store b;
    

    open(a, b);
    
    return 0;
}
