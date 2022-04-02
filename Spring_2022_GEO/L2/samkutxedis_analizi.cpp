/*
შემოგვაქვს სამკუთხედის გვერდები. პროგრამით უნდა დავადგინოთ, შეიძლება თუ არა სამკუთხედის აგება.
თუ სამკუთხედის აგება შესაძლებელია, პროგრამის საშუალებით უნდა დავადგინოთ, რა ტიპისაა ეს სამკუთხედი,
მართკუთხა, ტოლგვერდა თუ ტოლფერდა.
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"შემოიტანეთ სამკუთხედის გვერდები"<<endl;
    cin>>a>>b>>c; // a=3, b=3, c=3; a=3, b=2, c=2; a=5, b=4, c=3; a=7, b=3, c=8; a=3, b=3, c=2; a=3, b=2, c=3;
    if (a>=b && a>=c) 
    {
        cout<<"the biggest number is "<<a<<endl;
        if ((a+b)>c && (a+c)>b && (b+c)>a)
        {
            if ( (b*b+c*c)==a*a )
            {
                cout<<"სამკუთხედი მართკუთხაა"<<endl;
            }
            else if ((b==c && a!=b ) || (a==b && c!=a )  || (a==c && b!=a)) // a=3 b=2 c=2; a=3, b=3, c=2; a=3, b=2, c=3;
            {
                cout<<"სამკუთხედი ტოლფერდაა"<<endl;
            }
            else if ( a==b && b==c )
            {
                cout<<"სამკუთხედი ტოლგვერდაა"<<endl;
            }
            else
            {
                cout<<"სამკუთხედს აქვს არატოლი გვერდები"<<endl;
            }
        }
        else
        {
            cout<<"სამკუთხედი არ აიგება"<<endl;
        }
    } 
    else if(b>=c && b>=a)
    { 
        cout<<"the biggest number is "<<b<<endl;
        if ((a+b)>c && (a+c)>b && (b+c)>a)
        {
            if ( (a*a+c*c)==b*b )
            {
                cout<<"სამკუთხედი მართკუთხაა"<<endl;
            }
            else if ((b==c && a!=b ) || (a==b && c!=a )  || (a==c && b!=a)) // a=3 b=2 c=2; a=3, b=3, c=2; a=3, b=2, c=3;
            {
                cout<<"სამკუთხედი ტოლფერდაა"<<endl;
            }
            else if ( a==b && b==c )
            {
                cout<<"სამკუთხედი ტოლგვერდაა"<<endl;
            }
            else
            {
                cout<<"სამკუთხედს აქვს არატოლი გვერდები"<<endl;
            }
        }
        else
        {
            cout<<"სამკუთხედი არ აიგება"<<endl;
        }

    }
    else if(c>=a && c>=b)
    {
        cout<<"the biggest number is "<<c<<endl;
        if ((a+b)>c && (a+c)>b && (b+c)>a)
        {
            if ( (a*a+b*b)==c*c )
            {
                cout<<"სამკუთხედი მართკუთხაა"<<endl;
            }
            else if ((b==c && a!=b ) || (a==b && c!=a )  || (a==c && b!=a)) // a=3 b=2 c=2; a=3, b=3, c=2; a=3, b=2, c=3;
            {
                cout<<"სამკუთხედი ტოლფერდაა"<<endl;
            }
            else if ( a==b && b==c )
            {
                cout<<"სამკუთხედი ტოლგვერდაა"<<endl;
            }
            else
            {
                cout<<"სამკუთხედს აქვს არატოლი გვერდები"<<endl;
            }
        }
        else
        {
            cout<<"სამკუთხედი არ აიგება"<<endl;
        }

    }
    else
    {
        cout<<"რაღაც უცნაურობა ხდება "<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
    return 0;
}
