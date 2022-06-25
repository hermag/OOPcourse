#include <iostream>

using namespace std;
class rectangl
{
    private:
    int a;
    int b;
    public:
     rectangl()
     {
         a=0;
         b=0;
     }
     rectangl(int c, int d){
         a=c;
         b=d;
     }
     
     friend int area(rectangl);
     
    void set(int a1, int b1){
        a=a1;
        b=b1;
    }
    void get(){
        cout<<a<<endl<<b<<endl;
    }
};
 
 int area(rectangl g){
     return g.a * g.b;
 }

int main()
{
  rectangl a, b(4, 5);
  cout<<"a area is : "<<area (a)<<endl<<" b area is : "<<area(b)<<endl;
  
    return 0;
}
