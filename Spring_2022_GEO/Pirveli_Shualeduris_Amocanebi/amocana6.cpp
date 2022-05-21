/*
შექმენით სტრიქონების ვექტორი, ამ სტრიქონების ვექტორის სიგრძე შეიძლება იყო 100 ელემენტი. 
გამოიყენეთ map მონაცემთა სტრუქტურა და დაითვალეთ თუ რამდენჯერ მეორდება სტრიქონი მოცემულ 
100 ელემენტიან ვექტორში და ფუნქციის საშუალებით დაბეჭდეთ სამი სტრიქონი, 
რომელიც ყველაზე ხშირად გვხვდება ვექტორში.
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

void PrintVector(const vector<string>& v)
{
    for (auto e: v)
        {
            cout<<e<<" ";            
        }
    cout<<endl;
}

int main()
{
    map<string, int> m;
    vector<string> v = {"asd", "asd","wer","ert","dfg","asd","dfg","cvb","vbn","mko"};
    string s;
    /*
    for (int i = 0; i<10; i++)
        {
            cin>>s;
            v.push_back(s); 
        }
    */
    PrintVector(v);
    for (auto e : v)
    {
        m[e]=m[e]+1;
    }
    for (auto me : m)
    {
        cout<<me.first<<" "<<me.second<<endl;
    }
    return 0;
}