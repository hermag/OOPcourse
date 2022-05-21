/*
შექმენით მთელი რიცხვები ვექტორი და შეავსეთ ის ელემენტებით მანამ, სანამ არ შეიტანთ შემდეგ სიმბოლოს #.
გადაეცით ვექტორი ფუნქციას, რომელიც დაითვლის და დაბეჭდავს, ვექტორში ელემენტების საშუალო არითმეტიკულს, 
მაქსიმუმს და მინიმუმს. 
ვექტორში ელემენტების საშუალო არითმეტიკულის დადგენა, ისევე როგორც მაქსიმუმისა და მინიმუმის დათვლა 
განახორციელეთ ფუნქციების გამოყენებით. ასევე, ფუნქციების გამოყენებით დაადგინეთ, მაქსიმუმი და მინიმუმი 
ლუწი რიცხვია თუ კენტი, დადებითი თუ უარყოფითი და დაბეჭდეთ ეს ინფორმაცია.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int get_min(const vector<int>& v)
{
    int min = v[0];
    for (int i = 1; i<v.size(); i++)
    {
        if (v[i]<min)
        {
            min = v[i];
        }
        else
        {
            continue;
        }
    }
    return min;
}

int get_max(const vector<int>& v)
{
    int max = v[0];
    for (int i = 1; i<v.size(); i++)
    {
        if (v[i]>max)
        {
            max = v[i];
        }
        else
        {
            continue;
        }
    }
    return max;
}

int get_average(const vector<int>& v)
{
    int aver=0;
    for (int i = 0; i<v.size(); i++)
    {
        aver +=v[i]; 
    }
    aver = aver/v.size();
    return aver;
}


void analyse_vector(const vector<int>& v)
{
    int min, max, average;
    min = get_min(v);
    max = get_max(v);
    average = get_average(v);
    if (min>0)
        cout<<"მინიმალური მნიშვნელობა დადებითია"<<endl;
    else
        cout<<"მინიმალური მნიშვნელობა არა დადებითია"<<endl;
    if (max>0)
        cout<<"მაქსიმალური მნიშვნელობა დადებითია"<<endl;
    else
        cout<<"მაქსიმალური მნიშვნელობა არა დადებითია"<<endl;   
    if (average>0)
        cout<<"საშუალო მნიშვნელობა დადებითია"<<endl;
    else
        cout<<"საშუალო მნიშვნელობა არა დადებითია"<<endl; 
    if (min%2 == 0)
        cout<<"მინიმალური მნიშვნელობა ლუწია"<<endl;
    else
        cout<<"მინიმალური მნიშვნელობა კენტია"<<endl;
    if (max%2 == 0)
        cout<<"მაქსიმალური მნიშვნელობა ლუწია"<<endl;
    else
        cout<<"მაქსიმალური მნიშვნელობა კენტია"<<endl;   
    if (average%2 == 0)
        cout<<"საშუალო მნიშვნელობა ლუწია"<<endl;
    else
        cout<<"საშუალო მნიშვნელობა კენტია"<<endl; 
}

int main()
{
    vector<int> v;
    int e;
    string s;
    cout<<"თუ გსურთ რომ დაიწყოთ პროგრამა აკრიფეთ #-გან განსხვავებული ნებისმიერი სიმბოლო"<<endl;
    cin>>s;
    while(s!="#")
    {
        cout<<"გთხოვთ შემოიტანოთ რაიმე მთელი რიცხვი"<<endl;
        cin>>e;
        v.push_back(e);
        cout<<"თუ გსურთ რომ განაგრძოთ პროგრამა აკრიფეთ #-გან განსხვავებული ნებისმიერი სიმბოლო"<<endl;
        cin>>s;
    }
    analyse_vector(v);
    return 0;
}
