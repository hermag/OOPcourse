#include <iostream>
using namespace std;

struct phonenumber
  {
    int area_code;
    int exchange_code;
    int number;
  };

int main()
  {
    phonenumber number1={212,767,8900}, number2;
    cout<<"Enter your area code, exchange, and number:";
cin>>number2.area_code>>number2.exchange_code>>number2.number;
    cout<<"My number is ("<<number1.area_code<<") "<<number1.exchange_code<<"-"<<number1.number<<endl;
    cout<<"Your number is ("<<number2.area_code<<") "<<number2.exchange_code<<"-"<<number2.number<<endl;
    return 0;
  }
