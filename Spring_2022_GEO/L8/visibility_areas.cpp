#include <iostream>
using namespace std;

int sum(int x, int y)
{
    cout<<a;
    return x+y;
}

int main()
{
    int a=0, b=1;
    sum(a,b);
    return 0;
}

//ხედვის არეალი გულისხმობს იმას რომ ფუნქცია sum-დან ვერ განვახორციელებთ
//main ფუნქციის ცვლადებზე წვდომას, sum ფუნქცია, ასე ვთქვათ, ვერ ხედავს
//main ფუნქციაში შექმნილ ცვლადებს და მათზე მინიჭებულ მნიშვნელობებს.