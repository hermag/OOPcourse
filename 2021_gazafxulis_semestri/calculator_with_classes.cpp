#include <iostream>
using namespace std;

void welcome()
{
    cout<<"************************mogesalmebit programa kalkulatorSi***********************"<<endl;
    cout<<"Tqven SegiZliaT Semoitanot mTeli ricxvi da ganaxorcieloT maTze Semdegi operaciebi"<<endl;
    cout<<"mimateba +, gamokleba -, gamravleba *, gayofa /"<<endl;
    cout<<"kalkulatoridan gamosasvlelad akrifet simbolo e"<<endl;
}

class calc
{
    private:
        int x,y;
        char operation;
    public:
        calc()
        {
            int a,b;
            char op;
            cout<<"SemoitaneT pirveli ricxvi"<<endl;
            cin>>a;
            x=a;
            cout<<"SemoitaneT meore ricxvi"<<endl;
            cin>>b;
            y=b;
            cout<<"Semoitanet sasurveli aritmetikuli operacia +,-,* an /"<<endl;
            cin>>op;
            operation = op;
        }
        char get_operation()
        {
            return operation;
        }
        void jami ()
        {
            cout<<"Tqvens mier Semotanili ricxvebis jamia "<<x+y<<endl;
        }
        void sxvaoba()
        {
            cout<<"Tqvens mier Semotanili ricxvebis jamia "<<x-y<<endl;
        }
        void gamravleba()
        {
            cout<<"Tqvens mier Semotanili ricxvebis jamia "<<x*y<<endl;
        }
        void gayofa()
        {
            cout<<"Tqvens mier Semotanili ricxvebis jamia "<<x/y<<endl;
        }        
};

int main()
{
    char operation;
    welcome();
    do {
        calc ob;
        operation = ob.get_operation();
        switch (operation)
        {
            case '+':
                ob.jami();
                break;
            case '-':
                ob.sxvaoba();
                break;
            case '*':
                ob.gamravleba();
                break;
            case '/':
                ob.gayofa();
                break;
            case 'e':
                cout<<"Tqven asrulebT programa kalkulatorTan muSaobas"<<endl;
                break;
            default:
                cout<<"operacia ar moiZebna"<<endl;
                break;
        }
    } while (operation!='e');
    return 0;
}