#include <iostream>
using namespace std;

//მუდმივი გლობალური ცვლადის გამოყენება
const int n = 3; 
const int m = 3;

int diagonal_sum_calculation(int test[n][m])
    {
        int i,j,s;
        for (i=0; i<n;i++)
          {
            for(j=0;j<m;j++)
            {
              if(j>=i)
                {
                    s+=test[i][j];
                }
            }
        }
        return s;
    }

int main()
  {
    int i, j, s=0, a[n][m];
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
    s = diagonal_sum_calculation(a);
    cout<<endl<<"elementebis jamia "<<s<<endl;
    return 0;
  }
