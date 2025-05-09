// Song.h
#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    string lyrics;
    int duration; // in seconds

public:
    Song();
    Song(string title, string artist, int duration, string lyrics);

    string getTitle() const;
    string getArtist() const;
    string getLyrics() const;
    int getDuration() const;

    void displayInfo() const;
};
#endif

