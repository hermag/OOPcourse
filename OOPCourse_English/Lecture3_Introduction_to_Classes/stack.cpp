#include <iostream>
using namespace std;
#define SIZE 10
//declaration of class stack for characters
class stack
  {
    char stack[SIZE]; //this is the array of chars, i.e. stack itself!
    int tos; //it is the top index of the stack
  public:
    void init(); //Initialisation of stack
    void push(char ch); //Pushes element in the stack
    char pop(); //Pops out character (the last character) from stack
  };

  void stack::init()
    {
      tos=0;
    }
  void stack::push(char ch)
    {
      if (tos == SIZE)
        {
          cout<<"Stack is full";
          return;
        }
      stack[tos]=ch;
      tos++;
    }
  char stack::pop()
    {
      if(tos==0)
        {
          cout<<"stack is empty";
          return 0;
        }
      tos--;
      return stack[tos];
    }

int main()
  {
    stack s1, s2;
    int i;
    //initialization of Stack
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    cout<<"Symbols from Stack 1, i.e. s1"<<endl;
    for (i=0; i<3; i++)
      {
        cout<<"s1["<<i<<"]="<<s1.pop()<<endl;
      }
    cout<<"Symbols from Stack 2, i.e. s2"<<endl;
    for (i=0; i<3; i++)
      {
        cout<<"s2["<<i<<"]="<<s2.pop()<<endl;
      }
    return 0;
  }
