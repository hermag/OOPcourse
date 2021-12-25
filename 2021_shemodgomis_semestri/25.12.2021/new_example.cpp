#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int; //მეხსიერების გამოყოფა მთელი რიცხვისთვის
    if (!p) 
    {
        cout<<"Cannot allocate memory"<<endl;
        return 1;
    }
    *p=1000;
    cout<<"ეს არის მთელი რიცხვი რომელზეც მიუთითებს p: "<<*p<<endl;
    delete p; //მეხსიერების განთავისუფლება
    return 0;
}