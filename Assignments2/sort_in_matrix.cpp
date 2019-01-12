#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //dimensions
  int N, M, i, i1, j, j1;
  cout<<"შემოიტანეთ მასივის განზომილებები, ჯერ სტრიქონების რაოდენობა, შემდეგ სვეტების რაოდენობა"<<endl;
  cin>>N>>M;
  // მეხსიერების დინამიური გამოყოფა
  int** twodarray = new int*[N];
  for(i = 0; i < N; ++i)
    twodarray[i] = new int[M];

  // შევსება
  cout<<endl<<"შემოიტანეთ მასივის ელემენტები"<<endl;
  for(i = 0; i < N; ++i)
    for(j = 0; j < M; ++j)
      cin >> twodarray[i][j];

  for (i = 0; i < N; i++)
    {
      for (j=0; j< M; j++)
        {
          for (i1 = 0; i1<N; i1++)
            {
            for(j1 = 0; j1<M; j1++)
              {
                if (twodarray[i][j] < twodarray[i1][j1])
                  {
                    twodarray[i1][j1] = twodarray[i][j] + twodarray[i1][j1];
                    twodarray[i][j] = twodarray[i1][j1] - twodarray[i][j];
                    twodarray[i1][j1] = twodarray[i1][j1] - twodarray[i][j];
                  }
              }
            }
        }
    }

    //ბეჭდვა
    for(i = 0; i < N; ++i)
    {
      cout << endl;
      for(j = 0; j < M; ++j)
      {
        cout << setw(10) << twodarray[i][j];
      }
    }

  //მეხსიერების განთავისუფლება
  for(i = 0; i < N; ++i)
    delete [] twodarray[i];
  delete [] twodarray;
  return 0;
}
