#include <iostream>
using namespace std;
int main() {
    int i;
    cin>>i;
    while(i!=0){
        if(i%2==0)
            cout<<"ლუწია"<<endl;
        else
            cout<<"კენტია"<<endl;
        cin>>i;
    }
    return 0;
}