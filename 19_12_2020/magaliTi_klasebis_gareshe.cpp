#include <iostream>
#include <string>
#include <vector>
using namespace std;

void informaciis_shetana(vector<string>& sagnebi, vector<string>& instruqtorebi, vector<int>& xangrzlivoba)
{
	string s1, s2;
	int d;
	cout<<"შემოიტანეთ საგნის დასახელება"<<endl;
	cin>>s1;
	sagnebi.push_back(s1);
	cout<<"შემოიტანეთ კურსის მასწავლებლის სახელი და გვარი, გადაბმულად"<<endl;
	cin>>s2;
	instruqtorebi.push_back(s2);
	cout<<"შემოიტანეთ კურსის ხანგრძლივობა - კვირების რაოდენობა"<<endl;
	cin>>d;
	xangrzlivoba.push_back(d);
}

void PrintSubject(const string& s, const string& instr, const int& xangrZlivoba)
{
	cout<<s<<" საგანს ასწავლის "<<instr<<" და კურსის ხანგრძლივობაა "<<xangrZlivoba<<endl;
}

void PrintSpecialization(const vector<string>& sagnebi,const vector<string>& instruqtorebi,const vector<int>& xangrZlivoba)
{
	for(int i =0; i<sagnebi.size(); i++)
		PrintSubject(sagnebi[i], instruqtorebi[i], xangrZlivoba[i]);
}

int main()
{
	vector<string> sagnebi;
	vector<string> instruqtorebi;
	vector<int> xangrZlivoba;
	string s="";
	while(s!="!")
	{
		informaciis_shetana(sagnebi, instruqtorebi, xangrZlivoba);
		cout<<"გავაგრძელოთ საგნების ჩამონათვლის შეთანა?"<<endl;
		cin>>s;
	}
	PrintSpecialization(sagnebi, instruqtorebi, xangrZlivoba);
	return 0;
}

