#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int power(int x, int y) {
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;
}

int convert_string_to_int(string s)
{
    int size, return_value=0, i, ten_to_power=0;
    string preprocessed="";
    if (s[0]=='-')
    {
        for (int i=1; i<s.size();++i)
        {
            preprocessed+=s[i];            
        }
    }
    else
    {
        preprocessed = s;
    }
    size = preprocessed.size();
    for (i=size-1; i>=0; --i)
    {
        ten_to_power = power(10,i);
        return_value = return_value + ((((int)preprocessed[size-i-1])-48)*ten_to_power);
    }
    if (s[0]=='-')
    {
        return_value = -1 * return_value;
    }
    return return_value;
}


vector<int> parseInts(string str) {
    vector<string> v;
    vector<int> bla;
    string tmp;
    for (auto ch : str)
    {
        if(ch!=',')
        {
            tmp+=ch;
        }
        else
        {
            v.push_back(tmp);
            tmp = "";
        }
    }
    v.push_back(tmp);
    for (auto x : v)
    {
        bla.push_back(convert_string_to_int(x));
    }
    return bla;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
