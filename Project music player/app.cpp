#include "App.h"
#include <iostream>
#include <sstream>
using namespace std;

void showMenu() {
    cout << "\n======= Music Player =======" << endl;
    cout << "1. Add Song\n2. Remove Song\n3. Show All Songs\n4. Play\n5. Next\n6. Back\n7. Shuffle\n0. Leave" << endl;
    cout << "Enter：";
}

void handleUserInput(Player& player, Playlist& playlist) {
    int choice;
    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        string title, artist, lyrics;
        int duration;

        switch (choice) {
        case 1:
        {
            cout << "Enter Title："; getline(cin, title);
            cout << "Enter Artist："; getline(cin, artist);
            cout << "Enter Duration（s）："; cin >> duration; cin.ignore();
            cout << "Enter Lyrics（type END on a new line to finish）：\n";
            lyrics.clear();
            string line;
            while (getline(cin, line)) {
                if (line == "END") break;
                lyrics += line + "\n";
            }
            playlist.addSong(Song(title, artist, duration, lyrics));
            break;
		}
        case 2:
        {
            cout << "Enter Song Title to Remove："; getline(cin, title);
            playlist.removeSong(title);
            break;
		}
        case 3:
        {
            playlist.listSongs();
            break;
		}
        case 4:
        {
            player.play();
            break;
		}
        case 5:
        {
            player.next();
            break;
        }
        case 6:
        {
            player.prev();
            break;
		}
        case 7:
        {
            player.toggleShuffle();
            break;
		}
        case 0:
        {
            cout << " Bye！" << endl;
            break;
		}
        default:
        {
            cout << " Undefined, please try again." << endl;
            break;
        }
        }
    } while (choice != 0);
}
