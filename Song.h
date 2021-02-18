#include <stdlib.h>
#include <string>
using namespace std;

class Song{
    public:
        void setSong(string, string, int, int, int, int, int, int, int, int, bool);
        void toString();
    private:
        string title, artist;
        int mins, secs, day, month, year, addSec, addMin, addHour;
        bool Explicit;        
};