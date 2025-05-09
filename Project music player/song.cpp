#include "Song.h"
#include <iostream>

Song::Song(){}
Song::Song(string title, string artist, int duration, string lyrics): title(title), artist(artist), duration(duration), lyrics(lyrics) {}

string Song::getTitle() const 
{
    return title;
}

string Song::getArtist() const 
{
    return artist;
}

string Song::getLyrics() const 
{
    return lyrics;
}

int Song::getDuration() const 
{
    return duration;
}

void Song::displayInfo() const 
{
    cout << title << " - " << artist << " [" << duration << "s]" << endl;
    cout << lyrics << endl;
}
