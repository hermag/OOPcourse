#include <iostream>
#include <iomanip>
using namespace std;

class samp
  {
    private:
      int a;
    public:
      void set(int n)
        {
          a = n;
        }
      int get()
        {
          return a;
        }
  };

int main()
  {
    int N, M, i, i1, j, j1, tmp;
    cout<<"შემოიტანეთ მასივის განზომილებები, ჯერ სტრიქონების რაოდენობა, შემდეგ სვეტების რაოდენობა"<<endl;
    cin>>N>>M;
    samp** twodarray = new samp*[N];
    for(i = 0; i < N; ++i)
      twodarray[i] = new samp[M];
    //განსაზღვრა
    cout<<"შემოიტანეთ ობიექტების მასივის ელემენტები"<<endl;
    for(i = 0; i < N; ++i)
    {
      cout << endl;
      for(j = 0; j < M; ++j)
      {
        cin >> tmp;
        twodarray[i][j].set(tmp);
      }
    }
    cout<<endl;
    for(i = 0; i < N; ++i)
    {
      cout << endl;
      for(j = 0; j < M; ++j)
      {
        cout << setw(10) << twodarray[i][j].get();
      }
    }
    for (i = 0; i < N; i++)
      {
        for (j=0; j< M; j++)
          {
            for (i1 = 0; i1<N; i1++)
              {
              for(j1 = 0; j1<M; j1++)
                {
                  if (twodarray[i][j].get() < twodarray[i1][j1].get())
                    {
                      twodarray[i1][j1].set(twodarray[i][j].get() + twodarray[i1][j1].get());
                      twodarray[i][j].set(twodarray[i1][j1].get() - twodarray[i][j].get());
                      twodarray[i1][j1].set(twodarray[i1][j1].get() - twodarray[i][j].get());
                    }
                }
              }
          }
      }
    cout<<endl;
    for(i = 0; i < N; ++i)
    {
      cout << endl;
      for(j = 0; j < M; ++j)
      {
        cout << setw(10) << twodarray[i][j].get();
      }
    }
    return 0;
  }
