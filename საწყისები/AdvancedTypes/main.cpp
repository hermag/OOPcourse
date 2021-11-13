#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    string a;
    a="dog";
    cout<<"a="<<a<<endl;
    vector<int> test_vector={1,2,3,4,5,6,7,8,9};
    vector<string> test_string_vector={"ab","cd","ef","gh"};
    map<int,string> int_to_string;
    int_to_string[1]="ერთი";
    int_to_string[2]="ორი";
    int_to_string[3]="სამი";
    cout<<int_to_string[2]<<endl;
    return 0;
}
