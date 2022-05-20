#include <iostream>
using namespace std;

struct Compensation
  {
    int gel;
    int tetri;
  };

struct employee
  {
    int id;
    Compensation salary;
  };

int main()
  {
    employee empl[3];
    cout<<"შემოიტანეთ თანამშრომლის რიგითი ნომერი და ანაზღაურება ლარებში და თეთრებში"<<endl;
    for (int i=0; i<3; i++)
      {
        cout<<"Enter information for employee "<<i<<endl;
        cin>>empl[i].id>>empl[i].salary.gel>>empl[i].salary.tetri;
      }
    for (int i=0; i<3; i++)
      {
        cout<<"Employee "<<i<<endl;
        cout<<"id="<<empl[i].id<<" GEL="<<empl[i].salary.gel<<" Tetri="<<empl[i].salary.tetri<<endl;
      }
    return 0;
  }
