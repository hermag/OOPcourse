#include <iostream> 
#include <cmath>
using namespace std; 

double calculate_discriminant(double a, double b, double c)
    {
        double d;
        d=b*b-4*a*c;    
        return d;
    }

bool analyze_discriminant(double d)
{
    if (d>=0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

void calculate_roots(double a, double b, double c, double d)
{
    if (d==0)
        {
            cout<<"kvadratul gantolebas aqvs ori erTmamentis toli amonaxsni"<<endl;
            cout<<"amonaxsni tolia "<<-b/(2*a)<<endl;
        }
    else 
        { 
            cout<< "x1 = "<<(-b-sqrt(d))/(2*a) <<endl;
            cout<< "x2 = "<<(-b+sqrt(d))/(2*a) <<endl;
        }
}

int main() 
{
    double a, b, c, d, x1, x2;
    cout<< "gtxovt shemoitanot kvadratuli gantolebis parametrebi"<<endl;
    cin>>a>>b>>c;
    d=calculate_discriminant(a,b,c);
    if (analyze_discriminant(d))
    {
        calculate_roots(a, b, c, d);
    }
    else
    {
        cout<<"kvadartul gantolebas amonaxsni ar aqvs"<<endl;
    }        
    return 0;
} 