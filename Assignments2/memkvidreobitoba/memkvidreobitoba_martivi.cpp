#include <iostream>
using namespace std;
//ძირითადი კლასი
class forma
  {  
     public:
	 void setSigane(int w)
	    {
	      sigane = w;
	    }
	 void setSimagle(int h)
	    {
              simagle = h;
	    }
    protected:
         int sigane;
         int simagle;	 
  };
//შვილი კლასი
class Martkutxedi:public forma
  {
    public:
      int getFartobi()
        {
	  return sigane*simagle;
	}
  };

int main()
  {
    Martkutxedi rect;
    rect.setSigane(4);
    rect.setSimagle(3);
    cout<<"fartobi "<<rect.getFartobi()<<endl;
    return 0;
  }
