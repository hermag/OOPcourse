#include <iostream>
using namespace std;
//ეს ფუნქცია არგუმენტად იღებს
//მთელი რიცხვების მასივის პირველ ელემენტზე მიმთითებელს
//და ამ მასივში ელემენტების რაოდენობას
void get_odd_number(int *arr, int sz)
{
    int i;
    for (i=0; i<sz; i++){
	*(arr+i)=*(arr+i)+1;
    }
}

void get_odd_number_old_school(int arr[10])
{
    int i;
    for (i=0;i<10;i++)
	    arr[i]=arr[i]+1;
}

int main(){
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};
    get_odd_number_old_school(arr);
    for (int i =0; i<10; i++)
	cout<<arr[i]<<",";
    cout<<endl;    
    get_odd_number(&arr[0],sizeof(arr)/sizeof(arr[0]));
    for (int i=0; i<10; i++)
	cout<<arr[i]<<",";
    cout<<endl; 
    return 0;
}
