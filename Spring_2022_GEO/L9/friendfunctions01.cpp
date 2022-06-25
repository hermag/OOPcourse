/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length, width;
    
    public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    
    Rectangle(int a, int b)
    {
        length = a;
        width = b;
    }
    
    friend int area(Rectangle);
};

int area(Rectangle r)
{
    return r.length * r.width;
}


int main()
{
    Rectangle a, b(3, 4);
    
    cout<<"b area:"<<endl<<area(b)<<endl<<"a area:"<<endl<<area(a);
    

    return 0;
}
