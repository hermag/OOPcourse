#include <iostream>
#include <string>

using namespace std;

class Children
  {
    private:
      string name;
      string lastname;
      int age;
    public:
      Children(string, string, int, int);
      void setName(string newName);
      void setlastname(string newlastname);
      void setAge(int newAge);
      string getName();
      string getlastname();
      int getAge();
  };
Children::Children(string nameofperson, string resident, int years, int number)
  {
    name = nameofperson;
    lastname = resident;
    age = years;
  }
void Children::setname(string newName)
  {
    name = newName;
  }
void Children::setlastname(string newlastname)
  {
    lastname = newlastname;
  }
