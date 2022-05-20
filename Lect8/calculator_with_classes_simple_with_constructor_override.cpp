#include <iostream>

using namespace std;

class calculator
  {
    public:
      int x, y, z;
      calculator(int xvar, int yvar)
      {
        x=xvar;
        y=yvar;
      }
      calculator(int xvar, int yvar,char operatori)
      {
        x=xvar;
        y=yvar;
        switch(operatori){
                case '+':
                  z=x+y;
                  break;
                case '-':
                  z=x-y;
                  break;
                case '*':
                  z=x*y;
                  break;
                case '/':
                  z=x/y;
                  break;
                case '%':
                  z=x%y;
                  break;
                default:
                  cout<<"operacia ar moiZebna"<<endl;
                  break;
              }
      }
      int get_val()
        {
          return z;
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
                calculator kalk(x,y,'+');
                break;
              case '-':
                calculator kalk(x,y,'-');
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
