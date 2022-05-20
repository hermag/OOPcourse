#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> v) {
    int n;
    n=v.size();
    for (int i=0; i<n; i++)
    {
        cout<<v[i];
    }
    // for (auto e : v)
    // {
    //     cout<<e<<endl;
    // }
}


int main()
{
    vector<int> a;
    int e=0;
    while (e>=0)
    {
        cin>>e;
        a.push_back(e);
    }
    PrintVector(a);
    return 0;
}