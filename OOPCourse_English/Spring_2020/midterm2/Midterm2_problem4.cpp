#include <iostream>
using namespace std;

class m2p4
{
  private:
    int single_private_variable;
  public:
    void set(int x)
    {
      single_private_variable = x;
    }
    int get()
    {
      return single_private_variable;
    }
};

int main()
{
  int x, i;
  m2p4 obj[5];
  for (i=0; i<5; i++)
    {
      cout<<"Input "<<i<<" element"<<endl;
      cin>>x;
      obj[i].set(x);
    }
  for (i=0; i<5; i++)
    cout<<"obj["<<i<<"] = "<<obj[i].get()<<endl;
  return 0;
}
