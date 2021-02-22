#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

const int MAX_SONGS = 1;
Library library(MAX_SONGS);

void addSong(){
    if(library.numSongs == MAX_SONGS) {
        cout << "Sorry your library is full!" << endl;
    }else{
        cin.ignore();
        cout << "Sweet lets get some info about the song!\n";
        cout << "Enter the song title\n";
        string title; getline(cin, title);
        cout << "Enter the artist name\n";
        string artist; getline(cin, artist);
        cout << "Enter the song duration as \"MM:SS\"\n";
        string duration; getline(cin, duration);
        //Probs check format later
        cout << "Enter today's date as \"DD-MM-YYYY\"\n";
        string date; getline(cin, date);
        cout << "Enter the time as \"HH:MM:SS\" using military time\n";
        string time; getline(cin, time);
        cout << "And lastly does this song contain explicit lyrics? Type \"0\" for no and \"1\" for yes.\n";
        bool exp; cin >> exp;
        Song newSong;
        newSong.setSongInfo(title, artist, duration, date, time, exp);
        library.addSong(newSong);
        cout << "Song Added!" << endl;
    }
}

void showSongs(){
    if(library.numSongs == 0) cout << "There are no songs in the library\n";
    else{
        library.printLibrary();
    }
}

int UI(){
    cout<<"\n\nType: \"Add\" to add a song\n";
    cout<<"Type: \"Show\" to show all the songs in our library\n";
    cout<<"Type: \"Exit\" to exit the program\n\n";
    string selection;
    cin >> selection;
    if(selection.compare("Add") == 0){
        addSong();
        return 0;
    }else if(selection.compare("Show") == 0){
        showSongs();
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
    while(UI() == 0);
    cout << "Ending Program" << endl;
}