#include <iostream>
#include <vector>
using namespace std;

vector<int> AddElementToVector(vector<int> v);

void PrintVector(const vector<int>& v)
{
    //v = AddElementToVector(v);
    for (auto e : v)
    {
        cout<<e;
    }
    cout<<endl;
}

vector<int> AddElementToVector(vector<int> v)
{
    v.push_back(100);
    return v;
}

int main()
{
    // Declaring a vector
    vector<int> v = { 1, 2, 3 };
 
    // Declaring an iterator
    vector<int>::iterator i;
    cout<<"პირველადი ვექტორი"<<endl;
    PrintVector(v);
    //int j;
 
    // Inserting element using iterators
    for (i = v.begin(); i != v.end(); ++i) {
        if (i == v.begin()) {
            i = v.insert(i, 5);
            // inserting 5 at the beginning of v
        }
    }

    cout<<"ვექტორი დამატების შემდეგ"<<endl;
    PrintVector(v);
     
    // v contains 5 1 2 3
 
    // Deleting a element using iterators
    for (i = v.begin(); i != v.end(); ++i) {
        if (i == v.begin() + 1) {
            i = v.erase(i);
            // i now points to the element after the
            // deleted element
        }
    }
     
    // v contains 5 2 3
    cout<<"ვექტორი ელემენტის ამოშლის შემდეგ"<<endl;
    PrintVector(v);

    // Accessing the elements using iterators
    // for (i = v.begin(); i != v.end(); ++i) {
    //     cout << *i << " ";
    // }
 
    return 0;
}