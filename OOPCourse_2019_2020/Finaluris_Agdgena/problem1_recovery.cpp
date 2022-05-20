/*
დაწერეთ პროგრამა , სადაც შექმნით სტრუქტურას student შემდეგი ელემენტებით ,
სახელი , გვარი , ასაკი , სემესტრი ( ანუ სემესტრი რომელზეც
სწავლობს ) ახლა . შექმენით ამ სტრუქტურის ტიპის 3 ცვლადი . თითოეულ
ცვლადში გაუცვალეთ ადგილი სახელს და გვარს .
*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
  string name;
  string lastname;
  int age;
  int semester;
};

int main()
{
  string tmp;
  student stud[3];
  stud[0].name="Elene";
  stud[0].lastname="Kostava";
  stud[0].age = 23;
  stud[0].semester = 4;
  stud[1].name = "Zurab";
  stud[1].lastname="Kenchadze";
  stud[1].age = 21;
  stud[1].semester = 4;
  stud[2].name = "Reshad";
  stud[2].lastname="Tsetskhladze";
  stud[2].age = 21;
  stud[2].semester = 4;
  for (int i = 0; i<3; i++)
  {
    cout<<"NAME: "<<stud[i].name<<" LAST NAME: "<<stud[i].lastname<<" AGE: "<<stud[i].age<<" SEMESTER: "<<stud[i].semester<<endl;
  }
  for (int i = 0; i<3; i++)
  {
    tmp = stud[i].name;
    stud[i].name = stud[i].lastname;
    stud[i].lastname = tmp;
  }
  for (int i = 0; i<3; i++)
  {
    cout<<"NAME: "<<stud[i].name<<" LAST NAME: "<<stud[i].lastname<<" AGE: "<<stud[i].age<<" SEMESTER: "<<stud[i].semester<<endl;
  }
  return 0;
}
