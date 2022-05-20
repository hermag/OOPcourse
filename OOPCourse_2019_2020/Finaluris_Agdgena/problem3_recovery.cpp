/*
შექმენით კლასი , რომელშიც გექნებათ ორი მეთოდი , set() და get(). ამ
მეთოდების საშუალებით , სტრიქონული ტიპის დახურულ ცვლადს უნდა მიანიჭოთ
და წაიკითხოთ მნიშვნელობა . შექმენით ამ კლასის ობიექტების 10
ელემენტიანი მასივი , რომლის ელემენტებსაც შეიტანთ კლავიატურიდან , არ
გამოიყენოთ ელემენტების წინასწარ განსაზღვრა .
*/

#include <iostream>
#include <string>
using namespace std;

class problem3
{
  private:
    string internal_var;
  public:
    void set(string var)
    {
      internal_var = var;
    }
    string get()
    {
      cout<<"თქვენ იმყოფებით კლასში problem3 ";
      return internal_var;
    }
};

int main()
{
  string tmp;
  problem3 obj[10];
  int i;
  cout<<"შემოიტანეთ სტრიქონული ცვლადები"<<endl;
  for (i=0;i<10;i++)
    {
      cin>>tmp;
      obj[i].set(tmp);
    }
  cout<<endl<<"შემოტანილი ობიექტების დახურული ცვლადების მნიშვნელობებია"<<endl;
  for (i=0;i<10;i++)
    {
      cout<<obj[i].get()<<endl;
    }
  return 0;
}
