#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int x,y;
    double z;
    x=10;
    y=3;
    z=3.0;
    cout<<"x+y="<<x+y<<endl;
    cout<<"x*y="<<x*y<<endl;
    cout<<"x/y="<<x/y<<endl;
    cout<<"y/x="<<y/x<<endl;
    cout<<"x/z="<<x/z<<endl;
    cout<<"z/z="<<z/z<<endl;
    cout<<"z/(z+1.0)="<<z/(z+1.0)<<endl;
    cout<<"z/x="<<z/x<<endl;
    z = x/y;
    cout<<typeid(z).name();

    // == is equal?
    // != does not equal?
    // && - logical "and" or multiplication
    /* && means
     * True && True = True
     * True && False = False
     * False && True = False
     * False && False = False
     */
    // || - logical "or" operation
    /*
     * True || True = True
     * True || False = True
     * False || True = True
     * False || False = False
     */

    bool a, b;
    a = false;
    b = false;


    if (a==b)
        cout <<"True"<<endl;
    else if (a != b)
        cout <<"False"<<endl;
    else
        cout <<"God knows, what is happening here?"<<endl;

   int p,q,r;
   p=10;
   q=p++;
   r=++p;
   q=p--;
   r=--p;
   double tmp = 25.0;
   cout<<sqrt(tmp)<<endl;

   int i,j;

   cin>>i>>j;
   cout<<i<<j;

   double a,b,c;
   cin>>a>>b>>c;
   


   return 0;
}