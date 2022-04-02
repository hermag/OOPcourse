#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"გთხოვთ შემოიტანოთ სამკუთხედის გვერდები"<<endl;
    cin>>a>>b>>c;
    if ( (a+b)>c && (a+c)>b && (b+c)>a)
        {
            cout<<"სამკუთხედი აიგება"<<endl;
        }
    else
        {
            cout<<"სამკუთხედი ვერ აიგება"<<endl;
        }
    return 0;
}