#include <iostream>
using namespace std;

class truck;

class car 
{
    private:
        int passengers,speed;
    public:
        car(int p, int s) {passengers=p; speed=s;}
        friend int sp_greater(car c, truck t);
};

class truck
{
    private:
        int weight,speed;
    public:
        truck(int w, int s) {weight=w; speed=s;}
        friend int sp_greater(car c, truck t);
};

int sp_greater(car c, truck t)
{
    return c.speed - t.speed;
}

int main()
{
    int t;
    car c1(6,55), c2(2,120);
    truck t1(10000,55), t2(20000,45);
    cout<<"შევადაროთ c1-ის და t1-ის მნიშვნელობები"<<endl;
    t = sp_greater(c1,t1);
    if (t<0) cout<<"სატვირთო უფრო სწრაფი ყოფილა"<<endl;
    else if (t==0) cout<<"თანაბარი სიჩქარე ქონიათ"<<endl;
    else cout<<"მსუბუქი ავტომობილი უფრო სწრაფია"<<endl;
    
    return 0;
}