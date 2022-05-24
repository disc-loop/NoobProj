#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct grid {
    int height;
    int width;
};

class Game{
    public: 
    grid board;
    Game(int x, int y){
        board.width = x;
        board.height = y;
    }
};

// class Square {
//     public:
//     int initialpositionX;
//     int initialpositionY;
//     string owner;
//     string pieceType;
//     Square(int x, int y, string z, string o){ // constructor
//         initialpositionX = x;
//         initialpositionY = y;
//         pieceType = z;
//         owner = o;
// 
//     };
//     void moveSet(){
//         // 1. configure all possible moves
//         // 2. configure collisions to prune possible moves
//         // 3. highlight moves etc 
//         // 4. generate notation 
//     };
// };

// class Rook : public Square {
//     public: 
//     void henlo() {
//         cout << "memes";
//     };
// };

struct Square {
    string pieceType;
    void henlo() {
        cout << "Hello, I am a " + pieceType + "\n";
    };
};

int main() {
    Game g(7, 7);
    Square b[g.board.height][g.board.width];
    b[0][0].pieceType = "Rook";
    b[0][0].henlo();

    return 0;
}