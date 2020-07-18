/*
დაწერეთ პროგრამა , სადაც შექმნით სტრუქტურას student შემდეგი
ელემენტებით , სახელი , გვარი , ასაკი , სემესტრი ( ანუ სემესტრი რომელზეც
სწავლობს ) ახლა . შექმენით ამ სტრუქტურის ტიპის 5 ელემენტიანი მასივი .
შექმნილი მასივი გადაეცით ფუნქციას , რომელიც ადგილს გაუცვლის მასივის
ყველა ელემენტის სახელის და გვარის მნიშვნელობებს .
*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
  string name;
  string lastname;
  int age;
  int term;
};

void swapper(student *stud, int n)
{
  int i;
  string tmp;
  for (i=0;i<n;i++)
  {
    tmp = (*(stud+i)).name;
    (*(stud+i)).name = (*(stud+i)).lastname;
    (*(stud+i)).lastname = tmp;
  }
}

int main()
{
  student stud[5];
  int i;
  for (i=0;i<5;i++)
    {
      cout<<"შემოიტანეთ სტუდენტის სახელი"<<endl;
      cin>>stud[i].name;
      cout<<"შემოიტანეთ სტუდენტის გვარი"<<endl;
      cin>>stud[i].lastname;
      cout<<"შემოიტანეთ ასაკი"<<endl;
      cin>>stud[i].age;
      cout<<"შემოიტანეთ სტუდენტის სასწავლო სემესტრი"<<endl;
      cin>>stud[i].term;
    }
  swapper(&stud[0],sizeof(stud)/sizeof(stud[0]));
  for(i=0;i<5;i++)
    {
      cout<<"First Name "<<stud[i].name<<" Last Name "<<stud[i].lastname<<" age "<<stud[i].age<<" term "<<stud[i].term<<endl;
    }
  return 0;
}
