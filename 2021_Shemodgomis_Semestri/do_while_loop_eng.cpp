#include <iostream>
#include <string>
using namespace std;

void do_while_calc()
{
    int x,y;
    char operation;
    do {
        cout<<"Enter values for two integer numbers"<<endl;
        cin>>x>>y;
        switch(operation) {
            case '+':
                cout<<"x+y="<<x+y<<endl;
                break;
            case '-':
                cout<<"x-y="<<x-y<<endl;                
                break;
            case '*':
                cout<<"x*y="<<x*y<<endl;
                break;
            case '/':
                cout<<"x/y="<<x/y<<endl;
                break;
            default:
                cout<<"operation has not bee recognized"<<endl;
                break;
        }
        cout<<"Type one of these operations operations +, -, *, / \n Or if you want to stop the calculator, type ."<<endl;
        cin>>operation;
    } while (operation!='.');
}


void while_calc()
{
    int x,y;
    string operation=".";
    while (operation!=".") {
        cout<<"Enter values for two integer numbers"<<endl;
        cin>>x>>y;
        if (operation=="+")
        {
            cout<<"x+y="<<x+y<<endl;
        }
        else if (operation=="-")
        {
            cout<<"x-y="<<x-y<<endl;
        }
        else if (operation=="*")
        {
            cout<<"x*y="<<x*y<<endl;
        }
        else if (operation=="/")
        {
            cout<<"x/y="<<x/y<<endl;
        }
        else 
            cout<<"operation has not bee recognized"<<endl;
        cout<<"Type one of these operations operations +, -, *, / \n Or if you want to stop the calculator, type ."<<endl;
        cin>>operation;
    }
}

int main()
{
    //do_while_calc();
    while_calc();
    return 0;
}