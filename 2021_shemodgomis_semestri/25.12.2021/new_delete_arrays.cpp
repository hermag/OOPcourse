#include <iostream>
using namespace std;

/*
class samp
{
    int i,j;
public:
    samp(int a, int b) { i=a; j=b; }
    int get_product() { return i*j; }
};
*/

int main()
{
    int i,n;
    int *p;
    cin>>n;
    p = new int [n]; //მეხსიერების გამოყოფა samp კლასის ობიექტისთვის
    if (!p) 
    {
        cout<<"Cannot allocate memory"<<endl;
        return 1;
    }
    for (i=0; i<n; i++) p[i]=i;

    for (i=0; i<n; i++)
        {
            cout<<"ეს არის მთელი რიცხვი რომელზეც უთითებს p["<<i<<"]:"<<p[i]<<endl;
        }
        
    delete [] p; //მეხსიერების განთავისუფლება
    return 0;
}