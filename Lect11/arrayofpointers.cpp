#include <iostream>
using namespace std;

int main()
  {
    int a[5]={1,2,3,4,5}, i;
    int *p;
    p = a;  //რაც იგივეა რომ შევქმნათ მიმთითებელი პირველ ელემენტზე p = &a[0];
    for(i=0;i<5;i++){
      cout<<*p<<endl;
      p++;
      }
    return 0;
  }
