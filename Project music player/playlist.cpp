#include "Playlist.h"
#include <iostream>

Playlist::Playlist(string name) : name(name) {}

void Playlist::addSong(const Song& song) {
    songs.push_back(song);
    cout << "New Song Added：" << song.getTitle() << endl;
}

void Playlist::removeSong(const string& title) {
    int index = findSongIndex(title);
    if (index != -1) {
        songs.erase(songs.begin() + index);
        cout << "Song Removed：" << title << endl;
    }
    else {
        cout << "Song Not Found：" << title << endl;
    }
}

void Playlist::listSongs() const {
    cout << "PlayList《" << name << "》Song List：" << endl;
    for (size_t i = 0; i < songs.size(); ++i) {
        cout << i + 1 << ". ";
        songs[i].displayInfo();
    }
}

int Playlist::findSongIndex(const string& title) const {
    for (size_t i = 0; i < songs.size(); ++i) {
        if (songs[i].getTitle() == title) {
            return static_cast<int>(i);
        }
    }
    return -1; // not found
}

Song Playlist::getSong(int index) const {
    return songs.at(index);
}

int Playlist::getSize() const {
    return static_cast<int>(songs.size());
}

string Playlist::getName() const {
    return name;
}
