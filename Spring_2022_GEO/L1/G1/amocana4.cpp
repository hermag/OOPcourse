#include <iostream>
using namespace std;

int main()
{
    int n, i, sum=0;
    cout<<"შემოიტანეთ მთელი რიცხვი"<<endl;
    cin>>n;
    if (n<0)
    {
        cout<<"უარყოფითი რიცხვის აჯამვას ვერ განვახორციელებთ"<<endl;
    }
    else {
        for (i=1; i<=n; i++)
            {
                sum+=i;
            }
        cout<<"ჯამი ტოლია "<<sum<<endl;
    }
    return 0;
}