//In this example, object will be passed to the function
//as an argument.
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
    int get_i()
        {
          return i;
        }
  };

//This function takes object as an argument
//and uses object methods inside the function!
int sqr_it(samp o)
  {
    return o.get_i()*o.get_i();
  }

int main()
  {
    samp a(5),b(10);
    cout<<sqr_it(a)<<endl;
    cout<<sqr_it(b)<<endl;
    return 0;
  }
