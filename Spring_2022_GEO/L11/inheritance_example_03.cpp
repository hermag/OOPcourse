#include <iostream>
#include <string>
#include <list>
using namespace std;

class YouTubeChannel
{
    protected:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;
    public:
        YouTubeChannel(string name, string ownername) {
            Name = name;
            OwnerName = ownername;
            SubscribersCount = 0;
        }
        void Subscribe()
        {
            SubscribersCount++;
        }
        void Unsubscribe()
        {
            if (SubscribersCount>0)
            {
                SubscribersCount--;
            }
            else
            {
                SubscribersCount=0;
            }
        }
        void PublishVideo(string title)
        {
            PublishedVideoTitles.push_back(title);
        }
};

class CookingYouTubeChannel: public YouTubeChannel {
    public:
        CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName) {}
    void Practice() {
        cout<<"practicing cooking"<<endl;
    }
     void GetInfo()
        {
            cout<<"/////";
            cout<<"/////////////";
            cout<<"//////////////////////";
            cout<<"/////////////";
            cout<<"/////";
            cout<<"Name: "<<Name<<endl;
            cout<<"Channel Owner Name: "<<OwnerName<<endl;
            cout<<"Number of Subscribers: "<<SubscribersCount<<endl;
            for (string videotitle : PublishedVideoTitles)
            {
                cout<<videotitle<<endl;
            }
        }
};

int main()
{
    CookingYouTubeChannel cookingytChannel("Meskhuri Samzareulo","Giorgi");
    cookingytChannel.PublishVideo("Apokhtis Khinkali");
    cookingytChannel.PublishVideo("Bakmazi");
    cookingytChannel.PublishVideo("Qada");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();
    cookingytChannel.Practice();
    cookingytChannel.GetInfo();
    YouTubeChannel ytChannel("C++","Erekle");
    ytChannel.PublishVideo("Loops");
    ytChannel.PublishVideo("Conditionals");
    ytChannel.PublishVideo("Classes");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    return 0;
}