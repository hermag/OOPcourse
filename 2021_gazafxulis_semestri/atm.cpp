#include <iostream>
using namespace std;

void welcome()
{
    cout<<"***********************MENU***********************"<<endl;
    cout<<"Tanxis gamosatanat  akrifeT      =============> 1."<<endl;
    cout<<"balansis Sesavsebad akrifeT      =============> 2."<<endl;
    cout<<"balansis sanaxavad akrifeT       =============> 3."<<endl;
    cout<<"operaciis dasasruleblad akrifeT  =============> 4."<<endl;
    cout<<"**************************************************"<<endl;
}

int main()
{
    double balance = 0.0, withdraw, deposit;
    int operacia;
    welcome();
    do {
        cin>>operacia;
        switch (operacia)
        {
            case (1):
                cout<<"miuTiTeT ra Tanxis gatana gsurT angariSidan"<<endl;
                cin>>withdraw;
                if (withdraw>balance)
                {
                    cout<<"Tqven ar gaqvT angariSze sakmarisi Tanxa"<<endl;
                    welcome();
                    break;
                }
                else
                    balance -= withdraw;
                break;
            case (2):
                cout<<"miuTiTeT ra Tanxis Setana gsurT Tqvens angariSze"<<endl;
                cin>>deposit;
                balance += deposit;
                break;
            case (3):
                cout<<"Tqvens angariSze aris "<<balance<<endl;
                break;
            case (4):
                cout<<"kargad brZandebodet"<<endl;
                break;
            default:
                cout<<"operacia ar moiZebna"<<endl;
                break;

        }
    } while (operacia !=4);
    return 0;
}