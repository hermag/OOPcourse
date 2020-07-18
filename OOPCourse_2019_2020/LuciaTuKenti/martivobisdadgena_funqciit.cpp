#include <iostream>
#include <string>
using namespace std;

string checker(int x)
    {
	int i,gamyofebis_raodenoba;
	if(x==1)
		return "არც მარტივია არც შედგენილი";
	else if (x>1)
	{
	    gamyofebis_raodenoba=0;
	    for(i=2;i<x;i++)
	    {
	    	if(x%i==0)
			gamyofebis_raodenoba++;
	    }
	    if (gamyofebis_raodenoba>1)
		    return "შედგენილია";
	    else
		    return "მარტივია";
	}
	return "გაუგებრობა";
    }

int main()
{
    int i;
    string output;
    cout<<"შემოიტანეთ მთელი რიცხვი"<<endl;
    cin>>i;
    while(i>0)
    {
        output = checker(i);
	cout<<"შემოტანილი რიცხვი "<<i<<" "<<output<<endl;
	cin>>i;
    }
    return 0;
}
