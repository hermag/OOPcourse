#include <iostream>
using namespace std;

int main()
  {
    int i, j, n, m, s=0;
    int *p, *q;
    p=&n;
    q=&m;
    cout<<"shemoitanet matricis svetebis da striqonebis raodenoba"<<endl;
    cin>>n>>m;
    int a[*p][*q];
    for (i=0; i<n;i++)
      {
        for(j=0;j<m;j++)
          cin >> a[i][j];
      }
    cout<<"shemotanilia matrica";
    for (i=0; i<n;i++)
      {
        cout<<endl;
        for(j=0;j<m;j++)
          cout<< a[i][j] <<" ";
      }
    for (i=0; i<n;i++)
      {
        for(j=0;j<m;j++)
          {
              if(j>=i)
                s+=a[i][j];
          }
      }
    cout<<endl<<"elementebis jamia "<<s<<endl;
    return 0;
  }
