// C++ code to demonstrate the working of
// advance()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };
      
    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();
      
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr, 3);
      
    // Displaying iterator position
    cout << "მიმთითებელი  advance ოპერატორის გამოყენების შემდეგ მიუთითებს : ";
    cout << *ptr << " ";
      
    return 0;
      
}