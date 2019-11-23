#include <iostream>
using namespace std;

int main(){
	int a[3][4],i,j,max[3], m;
	//მასივის შეტანა
	for (i=0;i<3;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
	//ორგანზომილებიან მასივში მაქსიმალური ელემენტის პოვნა
	m = a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(a[i][j]>m)
				m=a[i][j];
	cout<<"ორგანზომილებიან მასივში უდიდესი ელემენტი არის "<<m<<endl;
	return 0;
}