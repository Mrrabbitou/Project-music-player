#include "App.h"
#include "Playlist.h"
#include "Player.h"

int main() {
    Playlist myPlaylist("MyPlayList");
    Player myPlayer(myPlaylist);
    handleUserInput(myPlayer, myPlaylist);
    return 0;
}
