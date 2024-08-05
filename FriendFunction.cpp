#include <iostream>
#include <string>
#include <list>
using namespace std;

class YouTubeChannel{
private:
    string Name;
    int SubscribersCount;

public:
    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const{
        return this -> Name == channel.Name;
    }

friend ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel);
};

// Overloading insertion operator "<<"
ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel) // Creating operator function as a global function and passing by reference
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

class MyCollection{   
private:
    list<YouTubeChannel> myChannels; // Creating a list of channels
public:
    void operator += (YouTubeChannel &channel) // Creating operator function += as a member function of structure "MyCollection"
    {
        this->myChannels.push_back(channel); // "this" indicates MyCollection
    }
    void operator -= (YouTubeChannel &channel)
    {
        this->myChannels.remove(channel);
    }

friend ostream &operator<<(ostream &COUT, MyCollection &myCollection);
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