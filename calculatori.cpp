#include <iostream>
using namespace std;
int main()
{
	 int x,y,z;
	 char operatori;
	 cout<<"Ketili iyos tqveni mobrZaneba programa kalkulatorshi"<<endl;
	 cout<<"Kalkulatoris mushaobis gacherebis piroba, operatori='.'"<<endl;
	 do{
				  cout<<"Shemoitanet x cvladis mnishvneloba"<<endl;
				 cin>>x;
				 cout<<"Shemoitanet y cvladis mnishvneloba"<<endl;
				 cin>>y;
				 cout<<"Shemoitanet cvladebs shoris operatori"<<endl;
				 cout<<"Dasashvebi operatorebis sia: + - * / %"<<endl;
				 cin>>operatori;
				 cout<<"kalkulatori angarishobs shemdegi operaciis shedegs "<<endl<<"x "<<operatori<<" y = ";
				 switch(operatori)
						     {
							      case '+':
								       z=x+y;
								        break;
									 case '-':
									 		 z=x-y;
											 break;
										case '*':
											 	z=x*y;
												break;
										case '/':
												z=x/y;
												break;
										case '%':
												z=x%y;
												break;
										default:
												cout<<"operacia ar moiZebna"<<endl;
												break;
										  }
				 cout<<z<<endl;
 } while(operatori!='.');
	 return 0;
}
