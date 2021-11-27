#include <iostream>
using namespace std;

#define SIZE 10

class stack {
    private:
        int tos;
        char stck[SIZE];
    public:
        // void init_tos(int t)
        // {
        //     tos = t;
        // }
        stack(int t)
        {
            tos = t;
        }
        int get_tos()
        {
            return tos;
        }
        void push(char s)
        {
            if (tos==SIZE)
            {
                cout<<"Stack is full, we are done"<<endl;
                return;
            }
            else {
                stck[tos]=s;
                ++tos;
            }
        }
        char pop()
        {
            if (tos==0)
            {
                cout<<"Stack is empty, we are done"<<endl;
                return ' ';
            }    
            else 
            {
                tos--;
                return stck[tos];
            }
        }
};

int main()
{
    stack s(10);
    cout<<s.get_tos()<<endl;
    //s.init_tos(0);
    s.push('a');
    s.push('b');
    s.push('c');
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}