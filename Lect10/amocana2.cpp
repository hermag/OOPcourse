#include <iostream>

using namespace std;

class calculator
  {
    public:
      int arr[4]={0,0,0,0};
      int size;
      calculator(int x, int y)
      {
        size = 2;
        arr[0]=x;
        arr[1]=y;
      }
      calculator(int x, int y, int z)
      {
        size = 3;
        arr[0]=x;
        arr[1]=y;
        arr[2]=z;
      }
      calculator(int x, int y, int z, int k)
      {
        size = 4;
        arr[0]=x;
        arr[1]=y;
        arr[2]=z;
        arr[3]=k;
      }
      int plus()
      {
        int s=arr[0];
        for (int i=1; i<size; i++)
          s+=arr[i];
        return s;
      }
      int minus()
      {
        int s=arr[0];
        for (int i=1; i<size; i++)
          s=s-arr[i];
        return s;
      }
      int gamravleba()
      {
        int s=arr[0];
        for (int i=1; i<size; i++)
          s=s*arr[i];
        return s;
      }
      int gayofa()
      {
        int s=arr[0];
        for (int i=1; i<size; i++)
          {
            if (arr[i]!=0)
              s=s/arr[i];
            else
              continue;
          }
        return s;
      }
  };

int operaciebi(char operatori, calculator calc)
  {
    int result;
    switch(operatori){
            case '+':
              result=calc.plus();
              break;
            case '-':
              result=calc.minus();
              break;
            case '*':
              result=calc.gamravleba();
              break;
            case '/':
              result=calc.gayofa();
              break;
            default:
              cout<<"operacia ar moiZebna"<<endl;
              break;
          }
    return result;
  }

int main()
{
  int x,y,z,k,res;
  char operatori="+";
   while(operatori!='.') {
    cout<<"Shemoitanet x cvladis mnishvneloba"<<endl;
    cin>>x;
    cout<<"Shemoitanet y cvladis mnishvneloba"<<endl;
    cin>>y;
    cout<<"Shemoitanet z cvladis mnishvneloba"<<endl;
    cin>>z;
    cout<<"Shemoitanet k cvladis mnishvneloba"<<endl;
    cin>>k;
    cout<<"Shemoitanet operatori"<<endl;
    cin>>operatori;
    calculator kalk1(x, y);
    res = operaciebi(operatori, kalk1);
    cout<<res<<endl;
    calculator kalk2(x, y, z);
    res = operaciebi(operatori, kalk2);
    cout<<res<<endl;
    calculator kalk3(x, y, z, k);
    res = operaciebi(operatori, kalk3);
    cout<<res<<endl;
    };
  return 0;
}
