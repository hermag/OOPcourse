#include <iostream>
using namespace std;

int main(){
	int i; //აღვწერთ ცვლადს რომელსაც შევიტანთ კლავიატურიდან
	int j; //მარტივობის დასადგენი ციკლის პარამეტრი
	int gamyofebis_raodenoba; //ცვლადი რომელშიც ვინახავთ გამყოფების რაოდენობას
	cout<<"შემოიტანეთ რიცხვი"<<endl;
	cin>>i; //შემოგვაქვს პირველი რიცხვი, რომელიც უნდა შევამოწმოთ მარტივობაზე
	while (i>0) //პირობა რომლის მიხედვითაც ეს ციკლი იმუშავებს მანამ, სანამ შემოვიტანთ მხოლოდ დადებით რიცხვებს
	{
	    gamyofebis_raodenoba=0;
	    if(i==1)
	    {
	    	cout<<"რიცხვი არ არის მარტივი"<<endl;
		break;
	    }
	    else if(i>1)
	    {
	    	for(j=2;j<i;j++)
			{
			   if(i%j==0)
				gamyofebis_raodenoba++;
			}
		if (gamyofebis_raodenoba>1)
			cout<<"რიცხვი "<<i<<" არ არის მარტივი"<<endl;
		else
			cout<<"რიცხვი "<<i<<" მარტივია"<<endl;
	    }
	    cin>>i;
	}

	return 0;
}
