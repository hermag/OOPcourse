#include <iostream>
#include <vector>
using namespace std;
 void luwi_kenti (vector<int> v)
 {
 	if (v.size()%2==0)
	 {
 		cout<<"yes";
	 }else{
	 	 cout<<"no";
	 }
 }

int main()
{
    vector<int> v;
    int a;
    cout<<"შემოიტანეთ ვექტორის პირველი ელემენტი"<<endl;
    cin>>a;
    while (a>=0)
    {
   	    v.push_back(a);
        cin>>a;
    }
    luwi_kenti (v);
    return 0;
}
