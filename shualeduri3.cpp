#include <iostream>
using namespace std;
class sample
 {
 private:
 double a,b,c;
 public:
 double sample(double x, double y, double z)
 {
 a=x;
 b=y;
 c=z;
 }
 double getsum()
 {
 return a+b+c;
 }
 };
int main () {
 double s;
 sample testclass(2,3,4);
 s = testclass.getsum();
 cout<<s;
 return 0;
}