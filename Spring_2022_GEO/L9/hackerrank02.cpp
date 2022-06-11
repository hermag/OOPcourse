/*
იხილეთ ამოცანა hackerrank02.pdf
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, x, a, b, e;
    vector<int> v;
    cin>>N;
    for (int i=0; i<N; i++)
    {   
        cin>>e;
        v.push_back(e);
    }
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1, v.begin()+b-1); 
    cout<<v.size()<<endl;
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
