#pragma once
#include <iostream>
#include "Song.h"
class Library{
    public:
        Library(const int max);
        void printLibrary();
        void addSong(Song);
        int numSongs;   
    private:
        Song songList[3];
};