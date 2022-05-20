#include <iostream>
using namespace std;

class rectangle
	{
	private:
		int x0=0,y0=0;
	public:
		int x1, y1;
		rectangle(int x, int y)
			{
				x1=x;
				y1=y;
			};
		int is_inside(int x, int y)
			{
				if ((x<x0 && y<y0)||(x>x1 && y>y1))
					return 0;
				else
					return 1;
			}	

	};

int main()
	{
		int i=0,x1,y1;
		int x,y;
		//rectangle r(4,5); //im shemtxvevashi tu ar gindat martkuxedis meore cveros koordinatebis shetana
		                    //unda moshalot komentari 29 xazze rectangle r(4,5) win, am shemtxvevashi koordinatebi iqneba
		                    //yoveltvis 4 da 5. 
							//Tu moshlit komentars 29 xazze, daakomentaret xazebi 33, 34 da 35. 
		cout<<"shemoitanet martxkutxedis meore cveros koordinatebi"<<endl;
		cin>>x1>>y1;
		rectangle r(x1,y1);
		for (i=0; i<5; i++)
			{
				cout<<"შემოიტანეთ მართკუთხედის წერტილის კოორდინატები"<<endl;
				cin>>x>>y;
				if ( r.is_inside(x,y) == 0)
					cout <<"certili martkutxedshi ar aris"<<endl;
				else if ( r.is_inside(x,y) == 1 )
					cout <<"certili martkutxedshi aris"<<endl;
				else
					cout<<"gaugebroba"<<endl;
			}
		return 0;
	}	