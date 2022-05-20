#include <iostream>
using namespace std;

int main()
{
  int *i; //და int* i ჩანაწერი არის ეკვივალენტური
          //*i გამოიყენება int ტიპის ცვლადის მისამართის შესანახად
          //და ეწოდება მიმთითებელი ცვლადზე
  int a;
  i = &a; //& გვაძლევს a ცვლადის მისამართს მეხსიერებაში
  cout<<"address of a ="<<i<<endl;
  a=10;
  cout<<"a="<<a<<endl;
  *i = 20;
  cout<<"a="<<a<<endl;
  return 0;
}
