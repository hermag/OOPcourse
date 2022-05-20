#include <iostream>
#define size 10
using namespace std;

void get_odd_number(int *arr)
{
    int i;
    for (i=0; i<size; i++){
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
    get_odd_number(&arr[0]);
    for (int i=0; i<10; i++)
	cout<<arr[i]<<",";
    cout<<endl; 
    return 0;
}



