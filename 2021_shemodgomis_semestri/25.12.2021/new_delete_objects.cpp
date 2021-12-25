#include <iostream>
using namespace std;

class samp
{
    int i,j;
public:
    samp(int a, int b) { i=a; j=b; }
    int get_product() { return i*j; }
};

int main()
{
    samp *p;
    p = new samp(6,5); //მეხსიერების გამოყოფა samp კლასის ობიექტისთვის
    if (!p) 
    {
        cout<<"Cannot allocate memory"<<endl;
        return 1;
    }
    cout<<"ეს არის მთელი რიცხვი რომელზეც მიუთითებს p: "<<p->get_product()<<endl;
    delete p; //მეხსიერების განთავისუფლება
    return 0;
}