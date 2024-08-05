#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:

	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

public:

	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
    
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
 
    void Subsribe() {
        SubscribersCount++;
    }

    void Unsubsribe() {
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishedVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
    
};

int main()
{
	YouTubeChannel ytChannel("Tech", "Bhashik");

	ytChannel.PublishedVideo("C++ for beginners");
	ytChannel.PublishedVideo("HTML & CSS for beginners");
	ytChannel.PublishedVideo("C++ OOP");

    ytChannel.Unsubsribe();

	ytChannel.GetInfo();

	system("pause>0");

}