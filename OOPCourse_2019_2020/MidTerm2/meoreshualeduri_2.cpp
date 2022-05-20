
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
    cout<< number2.area_code << " "<< number1.exchange_code <<" "<< number1.number << endl;
    return 0;
  }

  