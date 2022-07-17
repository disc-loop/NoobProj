#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>




using namespace std;

vector<string> moveValidator(int playerTurn, string boardState[8][8],int toCoordX,int toCoordY,int fromCoordX,int fromCoordY,int state[8][8]){
    vector<string> moveList = {};
    string currentMoveSet = "";
    int otherPlayer;
    int direction;

    if(playerTurn == 1){
      otherPlayer = 2;
      direction = +1;
    }
    if(playerTurn == 2){
      otherPlayer = 1;
      direction = -1;
    }


   /* if(state[fromCoordX][fromCoordY] != playerTurn){
        return moveList;
    } */
    if(boardState[fromCoordX][fromCoordY] == "P") /*prawn*/ 
    {
        /* if black then 1 if white then 6 */
      if(playerTurn == 1 ){
        if(fromCoordY == 1){
           /* 2 jumpy move */
          if(state[fromCoordX][fromCoordY+2] == 0 & state[fromCoordX][fromCoordY+1] == 0){
          currentMoveSet = fromCoordX + "," + fromCoordY+2;
          moveList.push_back(currentMoveSet);
          }
        }

        }
      if(playerTurn == 2){
        if(fromCoordY == 6){
           /* 2 jumpy move */
          if(state[fromCoordX][fromCoordY+(2*direction)] == 0 & state[fromCoordX][fromCoordY+(1*direction)] == 0){
          currentMoveSet = fromCoordX + "," + fromCoordY+(2*direction);
          moveList.push_back(currentMoveSet);
          }
        }
      }  
      if(state[fromCoordX][fromCoordY+(1*direction)] == 0){
          currentMoveSet = fromCoordX + "," + fromCoordY+(1*direction);
          moveList.push_back(currentMoveSet);
        }
      if(state[fromCoordX+-1][fromCoordY+(1*direction)] == otherPlayer){
          currentMoveSet = fromCoordX-1 + "," + fromCoordY+(1*direction);
          moveList.push_back(currentMoveSet);
        }
      if(state[fromCoordX+1][fromCoordY+(1*direction)] == otherPlayer){
          currentMoveSet = fromCoordX-1 + "," + fromCoordY+(1*direction);
          moveList.push_back(currentMoveSet);
        }
      }
      return moveList;
    }




int main () {
  string array[8][8];
  string line;
  fstream chessBoard;
  fstream initialStateReader;
  int initialState[8][8];

  int column = 0; 
  int row = 0;
  int frcolumn = 0;
  int frrow = 0;   
  initialStateReader.open("initialState.txt");
  if (initialStateReader.is_open())
  {
    while (getline (initialStateReader,line,','))
    {
      if(frcolumn == 8){
        frrow++;
        frcolumn = 0;
      }
      initialState[frrow][frcolumn] = stoi(line);
      frcolumn++;
      if(frrow > 8){
        return 0;
      }
    }
    for( int i = 0; i<size(initialState); i++){
        for( int y = 0; y<size(initialState); y++){
            //cout << i << "\n"; //<< "i^";
            //cout << y << "\n"; //<< "y^" << "\n";
            cout << initialState[i][y];
            if(y==7){
                cout << "\n";
            }
        }
    initialStateReader.close();
  }
  }  

  chessBoard.open ("chessboard.txt");
   if (chessBoard.is_open())
  {
    while ( getline (chessBoard,line,',') ) {
        if(column == 8){
        row++;
        column = 0; 
       }
       

       array[row][column] = line;
        //cout << line << "\n" << column <<"\n" << row <<"\n" << "rowcolumn^" << "\n";
        //cout << array[column][row] << "\n" << "bob";
       column++;
        
        if(row > 8){
            return 0;
        }
        
    }
       
        
     for( int i = 0; i<size(array); i++){
        for( int y = 0; y<size(array); y++){
            //cout << i << "\n"; //<< "i^";
            //cout << y << "\n"; //<< "y^" << "\n";
            cout << array[i][y];
            if(y==7){
                cout << "\n";
            }
        }
        
    } 
    chessBoard.close();
  }
  else cout << "Unable to open file";


  vector<string> currentMoveListOutput = moveValidator(1,array,6,6,1,1,initialState);
  for( int i = 0;i<size(currentMoveListOutput);i++){
    cout << "monkas" << currentMoveListOutput[i];
  }
  return 0;

 

};


