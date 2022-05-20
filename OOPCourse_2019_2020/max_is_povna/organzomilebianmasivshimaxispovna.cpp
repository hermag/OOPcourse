#include <iostream>
using namespace std;

int main(){
	int a[3][4],i,j,max[3], m;
	//მასივის შეტანა
	for (i=0;i<3;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
	//მასივის თითოეულ სტრიქონში უდიდესი ელემენტის პოვნა
	//და max მასივში ჩაწერა				
	for (i=0; i<3; i++)
	{
		max[i]=a[i][0];
		for(j=1;j<4;j++)
			{
				if (a[i][j]>max[i])
					max[i]=a[i][j];
			}
	}
	//ორგანზომილებიანი მასივის ელემენტების ბეჭდვა
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;			
	}	
	//max მასივის ელემენტების ბეჭდვა
	for (i=0;i<3;i++)
		cout<<max[i]<<endl;

	m=max[0];
	for(i=1;i<3;i++)
		if(max[i]>m)
			m=max[i];
	cout<<"ორგანზომილებიან მასივში უდიდესი ელემენტი არის "<<m<<endl;
	return 0;
}