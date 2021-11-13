#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CalculateDistance(const string& FromCity, const string& ToCity)
{
    return (FromCity.size() + ToCity.size())*20;
}

class Travel {
    private:
        string from_city;
        string to_city;
        int distance = 0;
    public:
        void set_from_city(string f_city)
        {
            from_city = f_city;
            distance = CalculateDistance(from_city, to_city);
        }
        void set_to_city(string t_city)
        {
            to_city = t_city;
            distance = CalculateDistance(from_city, to_city);
        }
        int get_distance()
        {
            return distance;
        }
};

void PrintVector(const vector<Travel>& v){
    for (auto e : v)
    {
        cout<<"მანძილი:"<<e.get_distance()<<endl;
    }
}

int main()
{
    string from_city, to_city;
    Travel t;
    vector<Travel> travel_vec;
    char stop_condition;
    do {
        cout<<"შემოიტანეთ გასამგზავრებელი ქალაქის დასახელება"<<endl;
        cin>>from_city;
        cout<<"შემოიტანეთ დანიშნულების ქალაქის დასახელება"<<endl;
        cin>>to_city;
        t.set_from_city(from_city);
        t.set_to_city(to_city);
        travel_vec.push_back(t);
        cout<<"თუ გსურთ გაჩერება აკრიფეთ ."<<endl;
        cin>>stop_condition;
    } while (stop_condition!='.');
    PrintVector(travel_vec);
    return 0;
}


