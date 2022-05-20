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

class atm {
    private:
        double amount = 0.0;
    public:
        double dpst;
        double wthdrw;
        void deposit()
        {
            cout<<"miuTiTeT ra Tanxis Setana gsurT Tqvens angariSze"<<endl;
            cin>>dpst;
            amount += dpst;
        }
        void withdraw()
        {
            cout<<"miuTiTeT ra Tanxis gatana gsurT angariSidan"<<endl;
            cin>>wthdrw;
            if (wthdrw>amount)
                {
                    cout<<"Tqven ar gaqvT angariSze sakmarisi Tanxa"<<endl;
                    welcome();
                }
            else
                amount -= wthdrw;
        }
        void get_balance()
        {
            cout<<"Tqvens angariSze aris "<<amount<<endl;
        }
};

int main()
{
    atm obj;
    int operacia;
    welcome();
    do {
        cin>>operacia;
        switch (operacia)
        {
            case (1):
                obj.withdraw();
                break;
            case (2):
                obj.deposit();
                break;
            case (3):
                obj.get_balance();
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