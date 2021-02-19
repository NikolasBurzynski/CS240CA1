#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

const int MAX_SONGS = 1;
Song library[MAX_SONGS];

void addSong(int *numSongs){
    if(*numSongs > MAX_SONGS - 1) {
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
        library[*numSongs].setSong(title, artist, duration, date, time, exp);
        *numSongs+=1;
        cout << "Song Added!" <<endl;
    }
}

void showSongs(int *numSongs){
    if(*numSongs == 0) cout << "There are no songs in the library\n";
    else{
        for(int i = 0; i < *numSongs; i++){
            library[i].toString();
        }
    }
}

int UI(int *numSongs){
    cout<<"\n\nType: \"Add\" to add a song\n";
    cout<<"Type: \"Show\" to show all the songs in our library\n";
    cout<<"Type: \"Exit\" to exit the program\n\n";
    string selection;
    cin >> selection;
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
    int numSongs = 0;
    cout<<"\nHello and welcome to Nikofy!\n";
    while(UI(&numSongs) == 0);
    cout << "Ending Program" << endl;
}