/*
დაწერეთ პროგრამა, რომელიც მოგთხოვთ სტრიქონების შეტანას,
მანამ სანამ არ შეიტანთ კითხვის ნიშნის სიმბოლოს - ? .
კითხვის ნიშნის სიმბოლოს შეტანის შემდეგ პროგრამა უნდა იძახებდეს ფუნქციას,
რომელმაც უნდა დააბრუნოს შეტანილ სტრიქონებში სიმბოლოების ჯამური რაოდენობა,
სტრიქონში სიმბოლოების რაოდენობის გაგება შესაძლებელია size() მეთოდით.
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

int count_characters(map<string, int>& m)
{
    map<string, int>:: iterator it;
    int character_number = 0;
    for (it = m.begin(); it!=m.end(); it++)
    {
        character_number = it->second;
    }
    return character_number;
}

void collect_strings(const string& s, map<string, int>& string_map)
{
    string_map[s] = s.size();
}

int main()
{
    string input_string;
    map<string, int> m;
    int symbol_count=0;
    cout<<"გთხოვთ შემოიტანოთ სტრიქონი"<<endl;
    cin>>input_string;
    while (input_string!="?")
    {
        collect_strings(input_string, m);
        cout<<"გთხოვთ შემოიტანოთ სტრიქონი"<<endl;
        cin>>input_string;
    }
    cout<<"სულ შემოტანილია "<<count_characters(m)<<" სიმბოლო"<<endl;
    return 0;
}