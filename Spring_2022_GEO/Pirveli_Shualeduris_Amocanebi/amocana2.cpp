/*
დაწერეთ პროგრამა, რომელიც მოგთხოვთ სტრიქონების შეტანას,
მანამ სანამ არ შეიტანთ კითხვის ნიშნის სიმბოლოს - ? .
კითხვის ნიშნის სიმბოლოს შეტანის შემდეგ პროგრამა უნდა იძახებდეს ფუნქციას,
რომელმაც უნდა დააბრუნოს შეტანილ სტრიქონებში სიმბოლოების ჯამური რაოდენობა,
სტრიქონში სიმბოლოების რაოდენობის გაგება შესაძლებელია size() მეთოდით.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void count_symbols(const string& s, int& count)
{
    count = count + s.size();
}

int main()
{
    string input_string;
    int symbol_count=0;
    cout<<"გთხოვთ შემოიტანოთ სტრიქონი"<<endl;
    cin>>input_string;
    while (input_string!="?")
    {
        count_symbols(input_string, symbol_count);
        cout<<"გთხოვთ შემოიტანოთ სტრიქონი"<<endl;
        cin>>input_string;
    }
    cout<<"სულ შემოტანილია "<<symbol_count<<" სიმბოლო"<<endl;
    return 0;
}