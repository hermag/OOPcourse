#include <iostream>

using namespace std;

class calculator
  {
    public:
      int plus(int x,int y)
      {
        return x+y;
      }
      int minus(int x,int y)
      {
        return x-y;
      }
      int gamravleba(int x,int y)
      {
        return x*y;
      }
      int gayofa(int x,int y)
      {
        return x/y;
      }
      int nashtitgayofa(int x,int y)
      {
        return x%y;
      }
  };

int main()
{
  int x,y,z;
  char operatori;
  calculator kalk;
  do {
      cout<<"Shemoitanet x cvladis mnishvneloba"<<endl;
      cin>>x;
      cout<<"Shemoitanet y cvladis mnishvneloba"<<endl;
      cin>>y;
      cout<<"Shemoitanet cvladebs shoris operatori"<<endl;
      cout<<"Dasashvebi operatorebis sia: + - * / %"<<endl;
      cin>>operatori;
      cout<<"kalkulatori angarishobs shemdegi operaciis shedegs "<<endl<<"x "<<operatori<<" y = ";
      switch(operatori){
              case '+':
                z=kalk.plus(x,y);
                break;
              case '-':
                z=kalk.minus(x,y);
                break;
              case '*':
                z=kalk.gamravleba(x,y);
                break;
              case '/':
                z=kalk.gayofa(x,y);
                break;
              case '%':
                z=kalk.nashtitgayofa(x,y);
                break;
              default:
                cout<<"operacia ar moiZebna"<<endl;
                break;
            }
        cout<<z<<endl;
    } while(operatori!='.');
  return 0;
}
