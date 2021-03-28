#include <iostream>
#include <vector>
#include <string>
using namespace std;

class stud
{
private:
    int a;
    float b;
public:
    double y;
    void set(int x){
        a = x;
    }
    int get()
    {
        return a;
    }
};

int main() {
    stud obj1, obj2;
    obj1.set(200);
    cout<<obj1.get()<<endl;
    return 0;
}
