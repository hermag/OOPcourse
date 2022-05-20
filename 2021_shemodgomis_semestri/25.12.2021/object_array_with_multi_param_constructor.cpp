#include <iostream>
using namespace std;

class samp 
{
    int a;
    int b;
public:
    samp(int n, int m) { a = n; b=m; }
    int get_a() { return a; }
    int get_b() { return b; }
};

int main()
{   
    samp ob[4][2] = { 
                        samp(1,2),samp(3,4),
                        samp(5,6),samp(7,8),
                        samp(9,10),samp(11,12),
                        samp(13,14),samp(15,16) 
                    };
    int i,j;
    for (i=0; i<4; i++)
        {
            for (j=0; j<2; j++)
                {
                    cout<<ob[i][j].get_a()<<","<<ob[i][j].get_b();
                    cout<<" --- ";
                }
            cout<<endl;
        }     
    return 0;
}