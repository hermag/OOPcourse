#include <iostream>
using namespace std;

class samp 
{
    int a;
public:
    samp(int n) { a = n; }
    int get_a() { return a; }
};

int main()
{   
    samp ob[4][2] = { 
                        1,2,
                        3,4,
                        5,6,
                        7,8 
                    };
    int i,j;
    for (i=0; i<4; i++)
        {
            for (j=0; j<2; j++)
                {
                    cout<<ob[i][j].get_a()<<",";
                }
            cout<<endl;
        }     
    return 0;
}