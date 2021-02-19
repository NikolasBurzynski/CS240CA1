#include <stdlib.h>
#include <string>
using namespace std;

class Song{
    public:
        void setSong(string, string, string, string, string, bool);
        void toString();
    private:
        string title, artist, time, date, duration;
        bool Explicit;        
};