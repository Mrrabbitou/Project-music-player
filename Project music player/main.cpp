#include <iostream>
#include "Song.h"
#include "Playlist.h"
#include "Player.h"
using namespace std;

void showMenu() 
{
    cout << "\n======= Music Player =======" << endl;
    cout << "1. Add Song" << endl;
    cout << "2. Remove Song" << endl;
    cout << "3. Show All Of Song" << endl;
    cout << "4. Play Song" << endl;
    cout << "5. Next" << endl;
    cout << "6. Back" << endl;
    cout << "7. Shuffle" << endl;
    cout << "0. Leave" << endl;
    cout << "Enter：";
}

int main() 
{
    Playlist myPlaylist("MyPlayList");
    Player myPlayer(myPlaylist);

    int choice;
    do 
    {
        showMenu();
        cin >> choice;
        cin.ignore(); // 清掉換行

        if (choice == 1) 
        {
            string title, artist, lyrics;
            int duration;

            cout << "Enetr Title：";
            getline(cin, title);
            cout << "Enter Artist：";
            getline(cin, artist);
            cout << "Enter Duration（s）：";
            cin >> duration;
            cout << "Enter Lyrics：";
            getline(cin, lyrics);
            cin.ignore();

            Song song(title, artist, duration, lyrics);
            myPlaylist.addSong(song);
        }
        else if (choice == 2) 
        {
            string title;
            cout << "Enter The Song Of The Name To Remove：";
            getline(cin, title);
            myPlaylist.removeSong(title);
        }
        else if (choice == 3) 
        {
            myPlaylist.listSongs();
        }
        else if (choice == 4) 
        {
            myPlayer.play();
        }
        else if (choice == 5) 
        {
            myPlayer.next();
        }
        else if (choice == 6) 
        {
            myPlayer.prev();
        }
        else if (choice == 7) 
        {
            myPlayer.toggleShuffle();
        }
        else if (choice == 0) 
        {
            cout << "👋 Bye！" << endl;
        }
        else 
        {
            cout << "⚠️ Undefined Plaese Enter Again." << endl;
        }

    } while (choice != 0);

    return 0;
}
