#include <iostream>
using namespace std;
void printarray(int *arr, int sz)
{
    int i;
    for (i=0; i<sz; i++){
        cout<<*(arr+i)<<endl;
        *(arr+i)=*(arr+i)+1;
    }
}

class test
{
    int a;
public:
    test(int bla)
    {
        a = bla;
    }
};


int main(){
    test arr[10];
    return 0;
}