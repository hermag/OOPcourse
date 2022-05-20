#include <iostream>
#include <string>
#include <map>
using namespace std;

void PrintMap(const map<string, int>& m)
{
    for (auto e : m)
    {
        cout<<"\t"<<e.first<<"\t"<<e.second<<endl;
    }
}

int main()
{
    string month_name;
    int days_in_month;
    map<string, int> calendar;
    calendar.insert(pair<string, int>("იანვარი",31));
    calendar.insert(pair<string, int>("თებერვალი",28));
    calendar.insert(pair<string, int>("მარტი",31));
    calendar.insert(pair<string, int>("აპრილი",30));
    //map-ის შევსება ციკლის საშუალებით 
    // for (int i=0; i<12; i++)
    //     {
    //         cin>>month_name;
    //         cin>>days_in_month;
    //         calendar.insert(pair<string, int>(month_name, days_in_month));
    //     }
    PrintMap(calendar);
    //calendar.insert(pair<string, int>("აპრილი",300));
    //calendar.insert(pair<string, int>("აპრილი",30));
    PrintMap(calendar);
    return 0;
}