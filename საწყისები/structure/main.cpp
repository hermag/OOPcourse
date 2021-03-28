#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    string lastname;
    int age;
};

int main() {
    Student stud;
    stud.name="Erekle";
    stud.lastname="Magradze";
    stud.age=22;
    cout<<"Name = "<<stud.name<<" Last Name = "<<stud.lastname<<" Age "<<stud.age<<endl;
    vector<Student> group3;
    group3.push_back({"Giorgi","Beridze",21});
    group3.push_back({"Davit","Kapanadze",22});
    group3.push_back({"Anar","Mammedov",22});
    cout<<group3[0].name<<endl;
    cout<<group3[2].lastname;
    return 0;
}
