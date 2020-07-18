/*
შექმენით კლასი , რომელიც შესაძლებლობას გვაძლევს გადავტვირთოთ
კონსტრუქტორი ცვლადების რაოდენობით - ცვლადის არ გადაცემის შემთხვევაში
კლასის დახურულ ცვლადს უნდა ენიჭებოდეს “sicarieleshi var”, ერთი
ცვლადის გადაცემის შემთხვევაში დახურულ ცვლადს უნდა ენიჭებოდეს
“amistvisac madloba”, ორი ცვლადის შემთხვევაში დახურულ ცვლადს უნდა
ენიჭებოდეს “bednierebaa ori cvladi geZleodes”. დაწერეთ პროგრამა
რომელშიც შევქმნით ასეთ კლასს და ამ კლასის ობიექტებს ცარიელი , ერთ
ცვლადიანი და ორ ცვლადიანი კონსტრუქტორის გამოყენებით ;
*/

#include <iostream>
#include <string>
using namespace std;

class problem4
{
  private:
    string priv_var;
  public:
    problem4()
    {
      cout<<"არც ერთი ცვლადის გადაცემის შემთხვევა"<<endl;
      priv_var = "sicarieleshi var";
    }
    problem4(int a)
    {
      cout<<"ერთი ცვლადის გადაცემის შემთხვევა"<<endl;
      priv_var = "amistvisac madloba";
    }
    problem4(int a, int b)
    {
      cout<<"ორი ცვლადის გადაცემის შემთხვევა"<<endl;
      priv_var = "bednierebaa ori cvladi geZleodes";
    }
};

int main()
{
  problem4 ob1, ob2(1), ob3(1,2);
  return 0;
}
