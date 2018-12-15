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

int main()
{
  int x,y,z;
  char operatori;
  cout<<"Shemoitanet x cvladis mnishvneloba"<<endl;
  cin>>x;
  cout<<"Shemoitanet y cvladis mnishvneloba"<<endl;
  cin>>y;
  cout<<"Shemoitanet z cvladis mnishvneloba"<<endl;
  cin>>z;
  //calculator kalk(x,y);
  calculator kalk(x, y, z);
  while(operatori!='.') {
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
              default:
                cout<<"operacia ar moiZebna"<<endl;
                break;
            }
        cout<<z<<endl;
    };
  return 0;
}
