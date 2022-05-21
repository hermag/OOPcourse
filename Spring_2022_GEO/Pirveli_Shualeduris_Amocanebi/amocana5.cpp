/*
შემოიტანეთ სამი მთელი რიცხვი, რომლის საშუალებითაც განისაზღვრება არითმეტიკული პროგრესია, ეს არის საწყისი მნიშვნელობა და სხვაობა, 
მესამე რიცხვი უნდა იყოს ის მაქსიმალური მნიშვნელობა რომელსაც არ უნდა გადააჭარბოს არითმეტიკული პროგრესიის ბოლო წევრმა.
შექმენით ფუნქცია, რომელიც დააბრუნებს ვექტორს, სადაც იქნება არითმეტიკული პროგრესიის წევრები ზემოთ აღნიშნული პარამეტრებით.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> get_arithmetic_progression(int begining, int diff, int max)
{
    vector<int> v;
    while (begining<=max)
    {
        v.push_back(begining);
        begining+=diff;
    }
    return v;
}

void PrintVector(const vector<int>& v)
{
    for (int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int begining, diff, max;
    vector<int> v;
    cout<<"გთხოვთ შემიტანოთ არითმეტიკული პროგრესიის პირველი ელემენტი, სხვაობა და მაქსიმუმი"<<endl;
    cin>>begining>>diff>>max;
    if (max<begining && diff>0)
    {
        cout<<"max ვერ იქნება საწყის ელემენტეზე ნაკლები როდესაც სხვაობა დადებითია"<<endl;
        return 2;
    }
    else if (max >begining && diff<0)
    {
        cout<<"max ვერ იქნება საწყის ელემენტეზე მეტი თუ სხვაობა უარყოფითია"<<endl;
        return 3;
    }
    else
    {
        v = get_arithmetic_progression(begining, diff, max);
    }
    PrintVector(v);
    return 0;
}