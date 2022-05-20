#include <iostream>
using namespace std;

void funqcia(int a)
  {
    int i;
    bool isPrime = true;
    for(i = 2; i <= a/2; ++i)
    {
      if(a % i == 0)
      {
          isPrime = false;
          break;
      }
    }
    if (isPrime)
        cout << "ricxvi "<<a<<" martivia"<<endl;
    else
        cout << "ricxvi "<<a<<" ar aris martivi"<<endl;
  }

void funqcia(int a, float k)
  {
    cout<<a<<" "<<k;
  }

void funqcia(int a, int b)
  {
    int i, c;
    c = a + b;
    bool isPrime = true;
    for(i = 2; i <= c/2; ++i)
    {
      if(c % i == 0)
      {
          isPrime = false;
          break;
      }
    }
    if (isPrime)
        cout << "ricxvi "<<c<<" martivia"<<endl;
    else
        cout << "ricxvi "<<c<<" ar aris martivi"<<endl;
  }

void funqcia(int a, int b, int c)
  {
    int i, d;
    d = a + b;
    bool isPrime = true;
    for(i = 2; i <= d/2; ++i)
    {
      if(d % i == 0)
      {
          isPrime = false;
          break;
      }
    }
    if (isPrime)
        cout << "ricxvi "<< d <<" martivia"<<endl;
    else
      {
        cout << "ricxvi "<< d <<" ar aris martivi"<<endl;
        if (d % c == 0)
            cout << "ricxvi "<<c<<" aris "<<d<<" gamyofi"<<endl;
        else
            cout << "ricxvi "<<c<<" ar aris "<<d<<" gamyofi"<<endl;
      }
  }

int main()
  {
    int a;
    float b=10.4;
    cin>>a;
    //funqcia(a);
    funqcia(a,b);
    return 0;
  }
