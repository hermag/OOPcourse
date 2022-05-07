/*
გადაწერეთ პროგრამა
https://github.com/hermag/OOPcourse/blob/main/Spring_2022_GEO/L2/samkutxedis_analizi.c
pp ისე რომ სამკუთხედის აგების და ტიპის დასადგენად გამოიყენოთ ფუნქციები (5
ქულა)
*/
#include <iostream>
#include <algorithm>
#include <vector>
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

void PrintVector(const vector<int>& v)
{
    for (auto e : v)
    {
         cout<<e<<" "; 
    }
    cout<<endl;
}

void daadginet_samkuTxedis_tipi(const int& a, const int& b, const int& c)
{
    vector<int> samkutxedis_gverdebi{a,b,c};
    sort(samkutxedis_gverdebi.begin(), samkutxedis_gverdebi.end());
    PrintVector(samkutxedis_gverdebi);
    if (samkutxedis_gverdebi[0]==samkutxedis_gverdebi[1] && samkutxedis_gverdebi[1]==samkutxedis_gverdebi[2])
        cout<<"სამკუთხედი ტოლგვერდაა"<<endl;
    else if ( (samkutxedis_gverdebi[0]*samkutxedis_gverdebi[0] + samkutxedis_gverdebi[1]*samkutxedis_gverdebi[1]) == samkutxedis_gverdebi[2]*samkutxedis_gverdebi[2])
        cout<<"სამკუთხედი მართკუთხაა"<<endl;
    else if ( (samkutxedis_gverdebi[0]==samkutxedis_gverdebi[1] && samkutxedis_gverdebi[1]!=samkutxedis_gverdebi[2] ) || (samkutxedis_gverdebi[1]==samkutxedis_gverdebi[2] && samkutxedis_gverdebi[2] != samkutxedis_gverdebi[0]))
        cout<<"სამკუთხედი ტოლფერდაა"<<endl;
    else
        cout<<"საქმე გვაქვს რიგით სამკუთხედთან"<<endl;
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