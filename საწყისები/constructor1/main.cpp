#include <iostream>

int sum()
{
    return 5+10;
}

int sum(int x)
{
    return x+5;
}

void sum(int& x, int& y)
{
    x=x+y
}

int sum(int x, int y)
{
    return x+y;
}

int main() {
    using namespace std;
    cout << "Hello, World!" << std::endl;
    return 0;
}
