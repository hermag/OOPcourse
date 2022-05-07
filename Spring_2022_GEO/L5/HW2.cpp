/*
გადაწერეთ პროგრამა
https://github.com/hermag/OOPcourse/blob/main/Spring_2022_GEO/L2/samkutxedis_analizi.c
pp ისე რომ სამკუთხედის აგების და ტიპის დასადგენად გამოიყენოთ ფუნქციები (5
ქულა)
*/
#include <iostream>
using namespace std;

bool aigeba_samkutxedi(const int& a, const int& b, const int& c)
{
    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

void daadginet_samkuTxedis_tipi(const int& a, const int& b, const int& c)
{
    if (a>b && a>c)
    {
        if ((b*b+c*c)==a*a)
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
    else if (b>a && b>c)
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
    else if (c>a && c>b) {
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
}


int main()
{
    int a,b,c;
    cout<<"შემოიტანეთ სამკუთხედის გვერდები"<<endl;
    cin>>a>>b>>c;
    if (aigeba_samkutxedi(a,b,c))
    {
        cout<<"სამკუთხედი აიგება"<<endl;
        daadginet_samkuTxedis_tipi(a,b,c);
    }
    else 
    {
        cout<<"სამკუთხედი არ აიგება"<<endl;
    }


    return 0;
}