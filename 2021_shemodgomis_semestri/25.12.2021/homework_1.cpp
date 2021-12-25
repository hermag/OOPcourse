#include <iostream>
using namespace std;

class letters 
{
    char ch;
public:
    letters(char c) { ch = c; }
    int get_ch() { return ch; }
};

int main()
{   
    //შექმენით 10 ელემენტიანი მასივი, რომელშიც ჩაწერთ ასოებს A-დან J-მდე და შემდეგ დაბეჭდეთ ეს ელემენტები.
    return 0;
}


class squares {
    int num, sqr;
public:
    squares(int a, int b) { num = a; sqr = b; }
    void show() { cout<<num<<' '<<sqr<<endl; }
};