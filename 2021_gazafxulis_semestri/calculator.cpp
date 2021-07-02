#include <iostream>
using namespace std;

void welcome()
{
    cout<<"************************mogesalmebit programa kalkulatorSi***********************"<<endl;
    cout<<"Tqven SegiZliaT Semoitanot mTeli ricxvi da ganaxorcieloT maTze Semdegi operaciebi"<<endl;
    cout<<"mimateba +, gamokleba -, gamravleba *, gayofa /"<<endl;
    cout<<"kalkulatoridan gamosasvlelad akrifet simbolo e"<<endl;
}

int main()
{
    char operation;
    double x,y;
    welcome();
    do {
        cout<<"SemoitaneT pirveli ricxvi"<<endl;
        cin>>x;
        cout<<"SemoitaneT meore ricxvi"<<endl;
        cin>>y;
        cout<<"Semoitanet sasurveli aritmetikuli operacia +,-,* an /"<<endl;
        cin>>operation;
        switch (operation)
        {
            case '+':
                cout<<"Tqvens mier Semotanili ricxvebis jamia "<<x+y<<endl;
                break;
            case '-':
                cout<<"Tqvens mier Semotanili ricxvebis sxvaobaa "<<x-y<<endl;
                break;
            case '*':
                cout<<"Tqvens mier Semotanili ricxvebis namravlia "<<x*y<<endl;
                break;
            case '/':
                cout<<"Tqvens mier Semotanili ricxvebis ganayofia "<<x/y<<endl;
                break;
            case 'e':
                cout<<"Tqven asrulebT programa kalkulatorTan muSaobas"<<endl;
                exit(0);
                break;
            default:
                cout<<"operacia ar moiZebna"<<endl;
                break;
        }
    } while (true);
    return 0;
}