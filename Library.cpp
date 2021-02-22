#include <iostream>
#include <stdlib.h>
#include <string>
#include "Song.h"
#include "Library.h"


Library::Library(const int max){
    Song songList[max];  
    numSongs = 0;
}

void Library::addSong(Song inSong){
    songList[numSongs] = inSong;
    numSongs++; 
}

void Library::printLibrary(){
    for(int i = 0; i < numSongs; i++){
        songList[i].toString();
    }
}