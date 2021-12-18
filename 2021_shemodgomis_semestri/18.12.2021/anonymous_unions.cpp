#include <iostream>
using namespace std;

int main()
{
    union {
        unsigned char bytes[8];
        double value;
    };
    int i;
    value = 87654.321;
    for (i=0; i<8; i++)
        cout<<(int)bytes[i]<<" ";

    return 0;
}