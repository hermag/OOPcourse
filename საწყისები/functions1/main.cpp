#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list={3,0,9,1,-10,4};
    int i, j, tmp;
    for (i=0;i<list.size()-1;i++)
    {
        for (j=i+1;j<list.size();j++)
        {
            if (list[i]>=list[j])
                {
                    tmp = list[i];
                    list[i]=list[j];
                    list[j]=tmp;
                }
            else {
                cout << "All Good" << endl;
            }
        }
    }
    for(i=0;i<list.size();i++)
        cout<<list[i]<<" ";
    return 0;
}
