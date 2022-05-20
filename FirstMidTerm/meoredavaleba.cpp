#include <iostream>
using namespace std;

int main()
  {
    int n[3][4] = {{12,-13,10,4},{9,2,34,2},{12,13,5,6}};
    int i,j,v;
    v=n[0][0];
    for (i=0;i<3;i++)
      for (j=0;j<4;j++)
      {
        if(n[i][j]>=v)
          v=n[i][j];
      }
    cout<<v<<endl;  
    return 0;
  }
