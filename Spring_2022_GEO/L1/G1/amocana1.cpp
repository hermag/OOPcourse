#include <iostream>
#include "foo.h"

using namespace foo;

int main()
{
    using namespace foo;
    cout<<"Hello, World"<<endl;
    print_answer();
    return 0;
}