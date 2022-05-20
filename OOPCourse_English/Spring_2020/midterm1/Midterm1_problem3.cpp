/*
Create the structure, which will have the following attributes, first name,
last name, age (use string library). Create 3 variables, which will have
the type of the structure. Use cin method to enter the values for the structure
attributes, use cout method to print them out.
*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
  string fname;
  string lname;
  int age;
};

int main()
{
  student stud1, stud2, stud3;
  cin >> stud1.fname >> stud1.lname >> stud1.age;
  cin >> stud2.fname >> stud2.lname >> stud2.age;
  cin >> stud3.fname >> stud3.lname >> stud3.age;
  cout << "Student 1 First Name "<< stud1.fname << ", Student 1 Last Name " << stud1.lname << ", Student 1 age "<< stud1.age<<endl;
  cout << "Student 2 First Name "<< stud2.fname << ", Student 2 Last Name " << stud2.lname << ", Student 2 age "<< stud2.age<<endl;
  cout << "Student 3 First Name "<< stud3.fname << ", Student 3 Last Name " << stud3.lname << ", Student 3 age " << stud3.age<<endl;
  return 0;
}
