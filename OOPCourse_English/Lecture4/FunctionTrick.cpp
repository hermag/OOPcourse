//In this example, we will change private variable of an object
//that we pass to the function and it will not affect an initial
//object, which has been passed to the function.
#include <iostream>
using namespace std;

class samp
  {
    int i;
  public:
    samp(int n)
      {
        i = n;
      }
    void set_i(int n) //This method sets value for private variable i
      {
        i = n;
      }
    int get_i()
      {
        return i;
      }
  };

//This function takes object as an argument
//and uses object methods inside the function!
int sqr_it(samp o)
  {
    o.set_i(o.get_i()*o.get_i());
    cout<<o.get_i()<<endl;
    return (o.get_i()*o.get_i());
  }

int main()
  {
    samp a(5),b(10);
    cout<<sqr_it(a)<<endl;
    cout<<sqr_it(b)<<endl;
    cout<<"Initial value of a "<<a.get_i()<<endl;
    cout<<"Initial value of b "<<b.get_i()<<endl;
    return 0;
  }
