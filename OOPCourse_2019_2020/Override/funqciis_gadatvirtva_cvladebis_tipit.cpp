#include <iostream>
using namespace std;

//ამ პროგრამაში გადავტვირთავთ sum ფუნქციას, ამ ფუნქციის გადატვირთვა ხორციელდება
//ფუნქციის არგუმენტების ტიპების გამოყენებით

int sum(int a, int b)
{
    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}

int main()
{
    int a,b;
    double c,d;
    cout<<"შემოიტანეთ მთელი რიცხვები"<<endl;
    cin>>a>>b;
    cout<<endl<<"ამ რიცხვების ჯამია "<<sum(a,b)<<endl;
    cout<<"შემოიტანეთ წილადი რიცხვები"<<endl;
    cin>>c>>d;
    cout<<endl<<"ამ რიცხვების ჯამია "<<sum(c,d)<<endl;
    return 0;
}
