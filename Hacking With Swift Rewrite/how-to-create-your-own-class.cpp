#include <iostream>
#include <string>

using namespace std;

class Game {
    
    public:
    int score;
    Game() {}
    Game(int setScore) {
        score = setScore;
    }
};

class Painting {
    string title, artist, paintType;

    public:
    Painting(string setTitle, string setArtist, string setPaintType) {
        title = setTitle;
        artist = setArtist;
        paintType = setPaintType;
    }
};

class Employee {
    int hours;

    public:
    Employee(int setWorkHour) {
        hours = setWorkHour;
    }
};

class Developer


int main() {
    Game game(100);
    Game newGame = game;
    game.score += 10;
    cout << game.score << endl;
    cout << newGame.score << endl;

    Painting painting("Mona Lisa", "Leonardo da Vinci", "Portrait painting");
}