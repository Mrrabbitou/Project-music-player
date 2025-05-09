#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"
#include <vector>
#include <string>
using namespace std;

class Playlist {
private:
    string name;
    vector<Song> songs;

public:
    Playlist(string name);

    void addSong(const Song& song);
    void removeSong(const string& title);
    void listSongs() const;
    int findSongIndex(const string& title) const;
    Song getSong(int index) const;
    int getSize() const;
    string getName() const;
};
#endif

