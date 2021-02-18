#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

const int MAX_SONGS = 3;
Song library[MAX_SONGS];

void addSong(int numSongs){
    cin.ignore();
    cout << "Sweet lets get some info about the song!\n";
    cout << "Enter the song title\n";
    string title; getline(cin, title);
    cout << "Enter the artist name\n";
    string artist; getline(cin, artist);
    cout << "Enter the song duration as \"MM:SS\"\n";
    int min, sec; 
    cin >> min; 
    cin >> sec;
    cout << min << endl;
    cout << sec << endl;    
}

void showSongs(int numSongs){
    if(numSongs == 0) cout << "There are no songs in the library\n";
    else{
        for(int i = 0; i < numSongs; i++){
            library[i].toString();
        }
    }
}

int UI(){
    cout<<"\n\nType: \"Add\" to add a song\n";
    cout<<"Type: \"Show\" to show all the songs in our library\n";
    cout<<"Type: \"Exit\" to exit the program\n\n";
    string selection;
    cin >> selection;
    int numSongs = 0;
    if(selection.compare("Add") == 0){
        addSong(numSongs);
        return 0;
    }else if(selection.compare("Show") == 0){
        showSongs(numSongs);
        return 0;
    }else if(selection.compare("Exit") == 0){
        return 1;
    }else{
        cout << "Invalid input please try again.\n";
        return 0;
    }
}

int main(){
    cout<<"\nHello and welcome to Nikofy!\n";
    // while(UI() == 0);
    int stop = UI();
    cout << "Ending Program" << endl;
}