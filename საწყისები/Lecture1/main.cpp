#include <iostream>
#include <map>
using namespace std;
int main() {
    map<char,int> char_to_int;
    char_to_int['o']=1;
    char_to_int['t']=2;
    cout << "Hello, World!" << endl;
    cout<<char_to_int['o']<<endl;
    return 0;
}
