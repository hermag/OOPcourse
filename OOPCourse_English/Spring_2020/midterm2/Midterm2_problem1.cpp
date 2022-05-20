#include <iostream>
#include <string>
using namespace std;

class simple
{
  private:
    string fname;
    string lname;
    int age;
  public:
    void set(string fname_, string lname_, int age_ )
    {
      fname = fname_;
      lname = lname_;
      age = age_;
    }
    void get()
    {
      cout<<"First Name "<<fname<<endl;;
      cout<<"Last Name "<<lname<<endl;;
      cout<<"Age "<<age<<endl;
    }
};

int main()
{
  simple obj1;
  string fname, lname;
  int age;
  cout<<"Enter the first name "<<endl;
  cin>>fname;
  cout<<"Enter the last name "<<endl;
  cin>>lname;
  cout<<"Enter the age "<<endl;
  cin>>age;
  obj1.set(fname, lname, age);
  obj1.get();
  return 0;
}
