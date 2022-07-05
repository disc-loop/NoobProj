#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


int main () {
  string array[8][8];
  string line;
  fstream chessBoard;
  int column = 0; 
    int row = 0;
  
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
  return 0;


}


