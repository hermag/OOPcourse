#include <iostream>
using namespace std;

int summ(int *a, int n)
  {
    int s=1;
    for (int i=0; i<n; i++)
    {
      s=s*(*a);
      *a++;
    }
    return s;
  }

int main()
  {
    char a;
    int i,n, *p, sum=0;
    cout<<"shemoitanet ciklis martvis cvladi"<<endl;
    cin >> a;
    while(a!='.')
      {
        cout<<"shemoitanet masivis ganzomileba"<<endl;
        cin >> n;
        int b[n];
        cout<<"shemoitanet a["<<n<<"] masivis elementebi"<<endl;
        for (i=0;i<n;i++)
          cin>>b[i];
        p = b;
        sum+=summ(p, n);
        cout<<"shemoitanet ciklis martvis cvladi"<<endl;
        cin >> a;
      }
    cout<<"namravlebis jamia "<<sum<<endl;
    return 0;
  }
