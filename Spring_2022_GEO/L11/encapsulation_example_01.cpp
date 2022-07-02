#include <iostream>
#include <string>
#include <list>
using namespace std;

class YoutubeChannel
{
    private:
        int NumofSubscribers;
        string Name;
        string OwnerName;
        list<string> PublishedVideosTitles;
    public:
        YoutubeChannel(string name, string ownername)
        {
            Name = name;
            OwnerName = ownername;
            NumofSubscribers = 0;
        }
        void GetInfo()
        {
            cout<<"Name: "<<Name<<endl;
            cout<<"OwnerName: "<<OwnerName<<endl;
            cout<<"SubscribersCount: "<<NumofSubscribers<<endl;
            cout<<"Videos: "<<endl;
            for (string videoTitle : PublishedVideosTitles) {
                cout<<videoTitle<<endl;
            }
        }
        void Subscribe()
        {
            NumofSubscribers++;
        }
        void Unsubscribe()
        {
            if (NumofSubscribers>0)
            {
                NumofSubscribers--;
            }
            else
                NumofSubscribers=0;

        }
        void SetVideoTitles(list<string> video_titles)
        {
            for (string video_title : video_titles)
            {
                PublishedVideosTitles.push_back(video_title);
            }
        }
};

int main()
{
    YoutubeChannel ytChannel("C++ Videos","Erekle");
    list<string> video_titles;
    video_titles.push_back("Intro to C++");
    video_titles.push_back("C++ loops");
    video_titles.push_back("C++ conditionals");
    ytChannel.SetVideoTitles(video_titles);
    //ytChannel.NumofSubscribers = 1000;
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    return 0;
}