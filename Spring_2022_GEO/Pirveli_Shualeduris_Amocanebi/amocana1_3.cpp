/*
დაწერეთ პროგრამა, რომელიც შეგატანინებთ სტრიქონს, მანამ სანამ არ შეიტანთ ძახილის ნიშანს (აი ამ სიმბოლოს !).
ძახილის ნიშნის შეტანის შემდეგ უნდა გაომიძახოთ ფუნქცია, რომელიც დაბეჭდავს თუ რამდენი სტრიქონი იქნა შეტანილი 
სულ, ანუ მანამდე სანამ შეიტანდით !-ს.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int count(const vector<string>& v)
{
    return v.size();
}

int main()
{
    vector<string> v;
    string input_string;
    cout<<"შემოიტანეთ სტრიქონი"<<endl;
    cin>>input_string;
    while (input_string!="!")
    {
        v.push_back(input_string);
        cout<<"შემოიტანეთ სტრიქონი"<<endl;
        cin>>input_string;
        /*
        cout<<"შეიყვანეთ სტრიქონი"<<endl;
        cin>>line;
        lines.push_back(line);
        */
    } 
    cout<<"სულ შემოტანილია "<<count(v)<<" სტრიქონი"<<endl;
    return 0;
}