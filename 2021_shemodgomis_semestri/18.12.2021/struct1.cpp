#include <iostream>
#include <string>
using namespace std;

class cl_type {
  public:  
    cl_type(double sallary, string name);
    void show();
  private:
    double income;
    string FullName;
};

cl_type::cl_type(double sallary, string name)
{
    income = sallary;
    FullName = name;
}

void cl_type::show()
{
    cout<<"Full Name: "<<FullName;
    cout<<":$ "<<income<<endl;
    if (income<0.0) cout<<"***"<<endl;
}

int main()
{
    cl_type acc1(100.12,"Askerov");
    cl_type acc2(-12.34,"Mamatsiani");
    acc1.show();
    acc2.show();
    return 0;
}