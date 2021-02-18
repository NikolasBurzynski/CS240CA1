#include <iostream>
#include <string>
using namespace std;

int greeting(){
    cout<<"Hello and welcome to Nikofy!\n";
    cout<<"Type: \"Add\" to add a song\n";
    cout<<"Type: \"Show\" to show all the songs in our library\n";
    cout<<"Type: \"Exit\" to exit the program\n";
    string selection;
    cin >> selection;
    if(selection.compare("Add") == 0){
        //addSong()
        cout << "Adding Songs" << endl;
        return 0;
    }else if(selection.compare("Show") == 0){
        //showSongs()
        cout << "Showing Songs" << endl;
        return 0;
    }else if(selection.compare("Exit") == 0){
        cout << "Bye Bye" << endl;
        return 1;
    }else{
        cout << "Invalid Selection" << endl;
        return 0;
    }
}

int main(){
    greeting();
}