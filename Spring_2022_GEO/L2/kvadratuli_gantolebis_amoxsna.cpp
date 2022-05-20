#include <iostream> 
#include <cmath>
using namespace std; 

int main() 
{
    double a, b, c, d, x1, x2;
    cout<< "gtxovt shemoitanot kvadratuli gantolebis parametrebi"<<endl;
    cin>> a>>b>>c;
    d= b*b-4*a*c;
    if(d<0)
        { 
            cout<< "gantolebas amonaxsni ar aqvs"<<endl;
        } 
    else if (d==0)
        {
            cout<<"kvadratul gantolebas aqvs ori erTmamentis toli amonaxsni"<<endl;
            cout<<"amonaxsni tolia "<<-b/(2*a)<<endl;
        }
    else 
        { 
            x1=(-b-sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a); 
            cout<< "x1 = "<<x1 <<endl;
            cout<< "x2 = "<<x2 <<endl;
        }
    return 0;
} 