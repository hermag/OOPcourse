#include <iostream>
using namespace std;

class myclass 
{
    private:
        int n,d;
    public:
        myclass(int i, int j) {n=i; d=j;}
        friend int isfactor(myclass ob);
};

int isfactor(myclass ob)
{
    if(!(ob.n % ob.d)) return 1;
    else return 0;
}

int main()
{
    myclass ob1(10,2), ob2(13,3);
    if (isfactor(ob1)) cout<<"10 2-ze unashtod iyofa"<<endl;
    else cout<<"10 2-ze unashtod ar iyofa"<<endl;
    if (isfactor(ob2)) cout<<"13 3-ze unashtod iyofa"<<endl;
    else cout<<"13 3-ze unashtod ar iyofa"<<endl;
    return 0;
}