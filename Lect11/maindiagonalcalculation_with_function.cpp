#include <iostream>
using namespace std;

int i, j, n, m, s=0;
int *p, *q;

int mtavari_diagonali(int a[][]);

int main()
  {
    cout<<"shemoitanet matricis svetebis da striqonebis raodenoba"<<endl;
    cin>>n>>m;
    p=&n;
    q=&m;
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
    s = mtavari_diagonali(p,q,a);
    cout<<endl<<"elementebis jamia "<<s<<endl;
    return 0;
  }

int mtavari_diagonali(int a[p][q])
    {
      int i,j,s;
      for (i=0; i<n;i++)
        {
          for(j=0;j<m;j++)
            {
                if(j>=i)
                  s+=a[i][j];
            }
        }
      return s;
    }
