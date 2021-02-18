#include <iostream>
#include <stdlib.h>
#include <string>
#include "Song.h"



void Song::setSong(string inTitle, string inArtist, int inMins, int inSecs, int inDay, int inMonth, int inYear, int inAddSec, int inAddMin, int inAddHour, bool inExplicit){
    title = inTitle;
    artist = inArtist;
    mins = inMins;
    secs = inSecs;
    day = inDay;
    month = inMonth;
    year = inYear;
    addSec = inAddSec;
    addMin = inAddMin;
    addHour = inAddHour;
    Explicit = inExplicit;
}

void Song::toString(){
    cout << "This song" <<endl;
}
