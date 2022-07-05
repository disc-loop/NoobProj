#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main () {
  string line;
  fstream myFile;

  vector<string> v;

  myFile.open("scrubs.txt");
  if (myFile.is_open()) {
    while ( getline(myFile, line) ) {
      v.push_back(line);
    }

    for ( int i = 0; i < v.size(); i++) {
      cout << v[i] << "\n";
    }

    myFile.close();
  }
  else cout << "Memes";

  return 0;
}
