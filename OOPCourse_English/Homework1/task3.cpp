#include <iostream>
using namespace std;

struct Distance
  {
    int feet;
    float inches;
  };

struct Volume
  {
    Distance height;
    Distance width;
    Distance length;
  };

int main()
  {
    Volume room;
    float volume, Height, Width, Length;
    cout<<"Please enter the dimenssions"<<endl;
    cout<<"Height: ";
    cin>>room.height.feet>>room.height.inches;
    Height = float(room.height.feet) + room.height.inches/12.0;
    cout<<endl<<"Width: ";
    cin>>room.width.feet>>room.width.inches;
    Width = float(room.width.feet) + room.width.inches/12.0;
    cout<<endl<<"Length: ";
    cin>>room.length.feet>>room.length.inches;
    Length = float(room.length.feet) + room.length.inches/12.0;
    volume = Height * Width * Length;
    cout<<"Volume="<<volume<<endl;
    return 0;
  }
