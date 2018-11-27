#include <iostream>

using namespace std;

class calculator
  {
    public:
      int x, y;
      calculator(int xvar, int yvar)
      {
        x=xvar;
        y=yvar;
      }
      int plus()
      {
        return x+y;
      }
      int minus()
      {
        return x-y;
      }
      int gamravleba()
      {
        return x*y;
      }
      int gayofa()
      {
        return x/y;
      }
      int nashtitgayofa()
      {
        return x%y;
      }
  };

int main()
{
  int x,y,z;
  char operatori;
  do {
      cout<<"Shemoitanet x cvladis mnishvneloba"<<endl;
      cin>>x;
      cout<<"Shemoitanet y cvladis mnishvneloba"<<endl;
      cin>>y;
      calculator kalk(x,y);
      cout<<"Shemoitanet cvladebs shoris operatori"<<endl;
      cout<<"Dasashvebi operatorebis sia: + - * / %"<<endl;
      cin>>operatori;
      cout<<"kalkulatori angarishobs shemdegi operaciis shedegs "<<endl<<"x "<<operatori<<" y = ";
      switch(operatori){
              case '+':
                z=kalk.plus();
                break;
              case '-':
                z=kalk.minus();
                break;
              case '*':
                z=kalk.gamravleba();
                break;
              case '/':
                z=kalk.gayofa();
                break;
              case '%':
                z=kalk.nashtitgayofa();
                break;
              default:
                cout<<"operacia ar moiZebna"<<endl;
                break;
            }
        cout<<z<<endl;
    } while(operatori!='.');
  return 0;
}
