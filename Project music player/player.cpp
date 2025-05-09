// Player.cpp
#include "Player.h"
#include <iostream>
#include <ctime>

Player::Player(Playlist& playlist)
    : playlist(playlist), currentIndex(0), isShuffling(false), rng(static_cast<unsigned>(time(nullptr))) {
}

void Player::play() {
    if (playlist.getSize() == 0) {
        cout << "⚠️ PlayList Is Empty,Unable To Play." << endl;
        return;
    }
    cout << "▶️ Now Play：";
    playlist.getSong(currentIndex).displayInfo();
}

void Player::next() {
    if (playlist.getSize() == 0) return;

    if (isShuffling) {
        uniform_int_distribution<int> dist(0, playlist.getSize() - 1);
        currentIndex = dist(rng);
    }
    else {
        currentIndex = (currentIndex + 1) % playlist.getSize();
    }
    play();
}

void Player::prev() {
    if (playlist.getSize() == 0) return;

    if (isShuffling) {
        uniform_int_distribution<int> dist(0, playlist.getSize() - 1);
        currentIndex = dist(rng);
    }
    else {
        currentIndex = (currentIndex - 1 + playlist.getSize()) % playlist.getSize();
    }
    play();
}

void Player::toggleShuffle() {
    isShuffling = !isShuffling;
    cout << "🔀 Shuffle Mode Is" << (isShuffling ? "On" : "Off") << endl;
}
