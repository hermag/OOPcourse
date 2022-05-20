#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;
    cin>>n;
    p = new int(n); //მეხსიერების გამოყოფა samp კლასის ობიექტისთვის
    if (!p) 
    {
        cout<<"Cannot allocate memory"<<endl;
        return 1;
    }
    cout<<"ეს არის მთელი რიცხვი რომელზეც მიუთითებს p: "<<*p<<endl;
    delete p; //მეხსიერების განთავისუფლება
    return 0;
}