#include <iostream>
using namespace std;

//ძირითადი კლასი
class forma
 {
   public:
	   /*
	    *g ცვლადი შეიძლება იყოს წრის რადიუსი,
	    *სამკუთხედი, ტრაპეციის ან მართკუთხედის სიმაღლე,
	    *ამიტომ აქვს ზოგადი სახელი
	    */
      void setGanzomileba(int g)
            {
	      simagle_radiusi = g;
	    }  
      protected:
         int simagle_radiusi;
 };
//შვილი კლასი
class cre:public forma
 {
   public:
     float getFartobi()
	{
	  return 3.14*float(simagle_radiusi)*float(simagle_radiusi);
	}
 };
//შვილი კლასი
class samkutxedi:public forma
 {
   //სცადეთ ცვლადი fuZe განსაზღვროთ კონსტრუქტორის, დახურული ტიპის ცვლადის
   //ფუნქციაში არგუმენტად გადაწოდების გამოყენებით. 
   public:
     float fuZe;
     float getFartobi()
	     {
	       return 0.5*float(simagle_radiusi)*fuZe;
	     }
 };

int main ()
{
  samkutxedi samk;
  samk.setGanzomileba(4);
  samk.fuZe = 3.0;
  cout<<"samkutxedis fartobi "<<samk.getFartobi()<<endl;
  return 0;
}
