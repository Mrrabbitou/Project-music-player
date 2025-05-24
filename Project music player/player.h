#ifndef PLAYER_H
#define PLAYER_H

#include "Playlist.h"
#include <random>
using namespace std;

class Player {
private:
    Playlist& playlist;
    int currentIndex;
    bool isShuffling;
    mt19937 rng;

public:
    Player(Playlist& playlist);

    void play();
    void next();
    void prev();
    void toggleShuffle();
};
#endif

