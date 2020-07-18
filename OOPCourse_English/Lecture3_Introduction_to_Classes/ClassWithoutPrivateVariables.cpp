#include <iostream>
using namespace std;

class testclass
  {
    public:
      int a;
      float f;
      void test(int x)
        {
          cout<<"ჩვენ ვართ ღია ტიპის კლასის მეთოდის ტანში x="<<x<<endl;
        }
  };

  int main()
    {
      testclass obj1;
      obj1.a=5;
      obj1.test(obj1.a);
      return 0;
    }
