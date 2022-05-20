/*
Create class, which will have at least 1 private variable and constructor to
initialize these variables. Create 5 element array of objects of this class.
Pass this array of objects to the function, which should arrange this array
in ascending order, according to the values of the private variables.
*/

#include <iostream>
using namespace std;

class m2p5
{
  private:
    int a;
  public:
    m2p5(int a_)
    {
      a=a_;
    }
    void set(int a__)
    {
      a=a__;
    }
    int get()
    {
      return a;
    }
};

void sorter(m2p5* o, int n)
{
  int i,j,t,tmp;
  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
      if (o[i].get() > o[j].get())
        {
          tmp = o[i].get();
          o[i].set(o[j].get());
          o[j].set(tmp);
        }
    }
  }
}

int main()
{
  int i,x;
  m2p5 obj[5]={3,-9,2,3,0};
  sorter(obj,sizeof(obj)/sizeof(obj[0]));
  for (auto o : obj)
    cout<<o.get()<<endl;
  return 0;
}
