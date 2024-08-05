#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const{
        return this -> Name == channel.Name;
    }
};

// Overloading insertion operator "<<"
ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel) // Creating operator function as a global function and passing by reference
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection
{
    list<YouTubeChannel> myChannels; // Creating a list of channels

    void operator += (YouTubeChannel &channel) // Creating operator function += as a member function of structure "MyCollection"
    {
        this->myChannels.push_back(channel); // "this" indicates MyCollection
    }
    void operator -= (YouTubeChannel &channel)
    {
        this->myChannels.remove(channel);
    }
};

ostream &operator<<(ostream &COUT, MyCollection &myCollection){ // Creating operator function as a global function and passing by reference
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl; 
    return COUT;
}

int main(){
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000); // Creating an object of YouTubeChannel type
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000); // Creating an object of YouTubeChannel type

    MyCollection myCollection; // Creating an object of "myCollection" type
    myCollection += yt1;       // OverLoading "+=" operator
    myCollection += yt2;        
    myCollection -= yt2;

    cout << myCollection;

    cin.get();
}