#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Board{
    public: 
    int ROWS = 8;
    int COLUMNS = 8; 
    
}

class Piece{
    public:
    int initialpositionX;
    int initialpositionY;
    string owner;
    string pieceType;
    Piece(int x, int y, string z, string o){ // constructor
        initialpositionX = x;
        initialpositionY = y;
        pieceType = z;
        owner = o;

    }
    void moveSet(){
        // 1. configure all possible moves
        // 2. configure collisions to prune possible moves
        // 3. highlight moves etc 
        // 4. generate notation 
    }

};

class Rook : public Piece {
    public: 
    
};


int main() {
    Piece rookie(1,1,"bob","playerOne");
    cout << rookie.owner;
    return 0;
}