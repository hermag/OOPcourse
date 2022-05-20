#include <iostream>
using namespace std;

//ამ პროგრამაში გადავტვირთავთ sum ფუნქციას, ამ ფუნქციის გადატვირთვა ხორციელდება
//ფუნქციაში გამოყენებული არგუმენტების რაოდენობით

int sum(int a, int b)
{
    return a+b;
}

double sum(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<"შემოიტანეთ მთელი რიცხვები"<<endl;
    cin>>a>>b>>c;
    cout<<endl<<"a და b რიცხვების ჯამია "<<sum(a,b)<<endl;
    cout<<endl<<"a, b და c რიცხვების ჯამია "<<sum(a,b,c)<<endl;
    return 0;
}
