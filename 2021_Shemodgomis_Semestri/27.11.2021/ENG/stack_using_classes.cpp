#include <iostream>
using namespace std;

# define SIZE 10

class stack 
{
    private:
        int tos;
        char stck[SIZE];
    public:
        stack (int t)
        {
            tos=t;
        }
        void push(char c);
        char pop();
        ~stack ()
        {
            cout<<"This is a destructor"<<endl;
        }
};

void stack::push(char c)
{
    if (tos==SIZE)
    {
        cout<<"The stack is full, we are done"<<endl;
        return;
    }
    stck[tos]=c;
    ++tos;
}

char stack::pop()
{
    if (tos==0)
    {
        cout<<"The stack is empty, we are done"<<endl;
        return ' ';
    }
    --tos;
    return stck[tos];
}

int main()
{
    stack s(1);
    char temp;
    s.push('a');
    s.push('b');
    s.push('c');
    do {
        temp = s.pop();
        cout<<temp<<endl;
    } while (temp!=' ');
    return 0;
}