#pragma once
#include <stdlib.h>
#include <string>

using namespace std;

class Song{
    private:
        string title, artist, time, date, duration;
        bool Explicit;  
    public:
        void setSongInfo(string, string, string, string, string, bool);
        void toString();    
};