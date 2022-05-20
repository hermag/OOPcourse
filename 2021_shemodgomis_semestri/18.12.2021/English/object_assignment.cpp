#include <iostream>
using namespace std;

class myclass 
{
    private:
        int a;
    public:
        myclass ()
        {
            a=0;
        }
        myclass(int i)
        {
            a=i;
        }
        void set_a(int i)
        {
            a=i;
        }
        void show()
        {
            cout<<a<<endl;
        }
        int get_a() const
        {
            return a;
        }
};

int get_square(const myclass& ob)
{
    return ob.get_a()*ob.get_a();
}

int get_square1(myclass ob)
{
    return ob.get_a()*ob.get_a();
}

myclass get_something(int a)
{
    myclass o1;
    o1.set_a(a);
    return o1;
}

int main()
{
    myclass o1(12);
    cout<<get_square(o1)<<endl;
    return 0;
}