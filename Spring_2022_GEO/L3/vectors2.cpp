#include <iostream>
#include <vector>
using namespace std;

bool leapyear(int year)
{
    if (year % 400 == 0)
        {
            return true;
        }
    else if (year % 4 == 0)
        {
            return true;
        }
    else
    {
        return false;
    }
}

void PrintVector(vector<int>& v)
{
    for (auto& e : v)
    {
        e++;
        cout<<e;
    }
    // for (int i=0; i< v.size(); i++)
    // {
    //     v[i]++;
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
}


int main()
{
    int year;
    cout<<"შემოიტანეთ წელი"<<endl;
    cin>>year;
    vector<int> days_in_month={31,28,31,30,31};
    if (leapyear(year))
    {
        days_in_month[1]++;
    }
    PrintVector(days_in_month);
    cout<<endl<<"vectoris elementebi main-dan"<<endl;
    for (auto e : days_in_month)
    {
        cout<<e<<endl;
    }
    return 0;
}
