#include <iostream>

namespace foo
{
    using namespace std;
    const int answer = 42;
    void print_answer()
    {
        cout<<"The answer is "<<answer<<endl;
    }
}


int main()
{
    using namespace foo;
    cout<<"Hello, World"<<endl;
    print_answer();
    return 0;
}