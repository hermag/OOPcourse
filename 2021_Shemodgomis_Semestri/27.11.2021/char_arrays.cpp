#include <iostream>
using namespace std;

#define SIZE 100

void enter_string(char *somestringtoget)
{
    int i=0;
    //გაჩერების პირობაა ' '-ის შემოტანა
    char temp;
    cin>>temp;
    while (temp!=' ')
    {
        somestringtoget[i]=temp;
        i++;
        cin>>temp;
    }
}

void print_string(char *somestringtoprint)
{
    for(int i=0; i<SIZE; i++)
    {
        cout<<somestringtoprint[i];
    }
}


int main()
{
    char fname[SIZE], lname[SIZE], temp;
    int i=0;
    do {
      cin>>temp;
      fname[i]=temp;
      ++i;
    } while(temp!=' ' && i<100);

    for (i=0; i<100; i++)
    {
        cin>>temp;
        if (temp==' ')
        {
            break;
        }
        else
        {
            fname[i]=temp;
        }
    }
    return 0;
}
