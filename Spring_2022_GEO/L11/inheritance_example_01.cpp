#include <iostream>
#include <string>
using namespace std;

class engine
{
    private:
        int number_of_cylinders;
    protected:
        double volume;
    public:
        void set_NumofCylinders(int Number_of_Cylinders)
        {
            number_of_cylinders = Number_of_Cylinders;
        }
        void set_volume(double Volume_in_Liters)
        {
            volume = Volume_in_Liters;
        }
        int get_NumofCylinders()
        {
            return number_of_cylinders;
        }
        double get_Volume()
        {
            return volume;
        }
};

class car : public engine
{
    private:
        int number_of_sits;
        string Type_;
    public:
        car (int NumberofSits, string type_, int number_of_cylinders_, double volume_)
        {
            set_NumofCylinders(number_of_cylinders_);
            //set_volume(volume);
            volume = volume_;
            number_of_sits = NumberofSits;
            Type_ = type_;
        }
        void GetCarDetails()
        {
            cout<<"Car of type "<<Type_<<" has "<<number_of_sits<<" sits and engine with "\
            <<get_NumofCylinders()<<" cylinders. Engine volume is "<<get_Volume()<<endl;
        }
};

int main()
{
    car c(5, "SuV", 6, 2.0);
    c.set_NumofCylinders(8);
    c.GetCarDetails();
    return 0;
}