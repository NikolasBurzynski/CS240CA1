#include <iostream>
#include <stdlib.h>
#include <string>
#include "Song.h"


void Song::setSongInfo(string inTitle, string inArtist, string inDuration, string inDate, string inTime, bool inExplicit){
    title = inTitle;
    artist = inArtist;
    duration = inDuration;
    date = inDate;
    time = inTime;
    Explicit = inExplicit;
}

void Song::toString(){
    cout << "Title: " << title << " Artist: " << artist << " E?: " << Explicit << " Length: " << duration << " Date Added: " << date << " Time Added:" << time << endl;
}
