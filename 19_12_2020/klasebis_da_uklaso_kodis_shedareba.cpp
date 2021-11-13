#include <iostream>
#include <string>
#include <vector>
using namespace std;

class subject
{
	public:
		string sagani;
		string mascavlebeli;
		int xangrZlivoba;
};

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

void Informaciis_Shetana(vector<subject>& s)
{
	subject S;
	cout<<"შემოიტანეთ საგნის დასახელება"<<endl;
	cin>>S.sagani;
	cout<<"შემოიტანეთ კურსის მასწავლებლის სახელი და გვარი, გადაბმულად"<<endl;
	cin>>S.mascavlebeli;
	cout<<"შემოიტანეთ კურსის ხანგრძლივობა - კვირების რაოდენობა"<<endl;
	cin>>S.xangrZlivoba;
	s.push_back(S);
}

void PrintSubject(const string& s, const string& instr, const int& xangrZlivoba)
{
	cout<<s<<" საგანს ასწავლის "<<instr<<" და კურსის ხანგრძლივობაა "<<xangrZlivoba<<endl;
}

void printsubject(const subject& s)
{
	cout<<s.sagani<<" საგანს ასწავლის "<<s.mascavlebeli<<" და კურსის ხანგრძლივობაა "<<s.xangrZlivoba<<endl;
}

void PrintSpecialization(const vector<string>& sagnebi,const vector<string>& instruqtorebi,const vector<int>& xangrZlivoba)
{
	for(int i =0; i<sagnebi.size(); i++)
		PrintSubject(sagnebi[i], instruqtorebi[i], xangrZlivoba[i]);
}

void printspecialization(const vector<subject> sv)
{
	for (auto s : sv)
		printsubject(s);
}


int main()
{
	//vector<string> sagnebi;
    //vector<string> instruqtorebi;
    //vector<int> xangrZlivoba;

	vector<subject> sv;
    string s="";
	while(s!="!")
	{
		//informaciis_shetana(sagnebi, instruqtorebi, xangrZlivoba);
		Informaciis_Shetana(sv);
		cout<<"გავაგრძელოთ საგნების ჩამონათვლის შეთანა?"<<endl;
		cin>>s;
	}
	//PrintSpecialization(sagnebi, instruqtorebi, xangrZlivoba);
	printspecialization(sv);
	return 0;
}

