#include <iostream>
using namespace std;

class myclass
    {
	int x;
      public:
	myclass()
	    {
	      x=0;
	    }	
	myclass(int n)
	    {
	      x=n;
	    }
        int getx()
	    {
	      return x;
	    }	
	};

int main()
    {
     myclass o1[10];
     myclass o2[10]={1,2,3,4,5,6,7,8,9,10};
     int i;
     for (i=0; i<10; i++)
       {
         cout<<"o1["<<i<<"]:"<<o1[i].getx()<<endl;
	 cout<<"o2["<<i<<"]:"<<o2[i].getx()<<endl;
       }
     return 0;
    }
