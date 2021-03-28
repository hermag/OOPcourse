#include <iostream>
using namespace std;

class problem8
{
private:
  int a;
public:
  void set(int p)
  {
    a=p;
  }
  int get()
  {
    return a;
  }
};

void sorter(problem8 *ob, int len)
{
  int i,j,temp_i,temp_j,temp;
  for (i=0;i<len-1;i++)
  {
    for (j=i+1;j<len;j++)
      {
        temp_i=(ob+i)->get();
        temp_j=(ob+j)->get();
        if (temp_i>=temp_j)
          {
            temp=temp_j;
            (ob+j)->set(temp_i);
            (ob+i)->set(temp);
          }
      }
  }
}

int main()
{
    problem8 ob[5];
    int i,n;
    for(i=0;i<5;i++)
    {
      cin>>n;
      ob[i].set(n);
    }
    sorter(&ob[0],sizeof(ob)/sizeof(ob[0]));
    for(i=0;i<5;i++)
      cout<<ob[i].get()<<" ";
    cout<<endl;
    return 0;
}
