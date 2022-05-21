/*
დაწერეთ პროგრამა, რომელიც შეგატანინებთ სტრიქონს, მანამ სანამ არ შეიტანთ ძახილის ნიშანს (აი ამ სიმბოლოს !).
ძახილის ნიშნის შეტანის შემდეგ უნდა გაომიძახოთ ფუნქცია, რომელიც დაბეჭდავს თუ რამდენი სტრიქონი იქნა შეტანილი 
სულ, ანუ მანამდე სანამ შეიტანდით !-ს.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=0;
    string input_string;
    cout<<"შემოიტანეთ სტრიქონი"<<endl;
    cin>>input_string;
    while (input_string!="!")
    {
        ++i;
        cout<<"შემოიტანეთ სტრიქონი"<<endl;
        cin>>input_string;
    } 
    cout<<"სულ შემოტანილია "<<i<<" სტრიქონი"<<endl;
    return 0;
}