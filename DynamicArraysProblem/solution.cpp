#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void get_elements(vector<vector <long int>>& v, vector<vector <long int>>& m)
{
	for (auto e : m)
	{
		cout<<v[e[0]][e[1]]<<endl;
	}
}

int main()
{
	int number, queue, size, temp, i, j, tmp1, tmp2;
	vector<vector <long int>> arrays;
	vector<vector <long int>> indeces;
	cin>>number>>queue;
	for (i=0; i<number; ++i)
	{
		cin>>size;
		vector<long int> tmp(size);
		for (j=0;j<size;j++)
		{
			cin>>temp;
			tmp[j]=temp;
		}
		arrays.push_back(tmp);
	}

	int ttra = 0;
	while(ttra<queue)
	{
		cin>>tmp1>>tmp2;
		indeces.push_back({tmp1, tmp2});
		++ttra;
	}

	get_elements(arrays, indeces);
	return 0;
}

