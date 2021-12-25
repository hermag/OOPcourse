#include <iostream>
using namespace std;

class samp
{
    int i,j;
public:
    void set_ij(int a, int b) { i=a; j=b; }
    int get_product() {return i*j; }
};

int main()
{
    samp *p;
    p = new samp; //მეხსიერების გამოყოფა samp კლასის ობიექტისთვის
    if (!p) 
    {
        cout<<"Cannot allocate memory"<<endl;
        return 1;
    }
    p->set_ij(4,5);
    cout<<"კლასის მეთოდის გამოძახება მიმთითებლის გამოყენებით "<<p->get_product()<<endl;
    delete p; //მეხსიერების განთავისუფლება
    return 0;
}