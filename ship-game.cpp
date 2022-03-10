#include <iostream>
using namespace std;
//player tryies to find number 1
int main() {
  
  bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  int hits = 0;
  int numberOfTurns = 0;
  int again;

   cout << "Selecting coordinates\n";
  while (hits < 4) {
    int row, column;
    againto:
    	
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    if (ships[row][column]) {
      ships[row][column] = 0;

      hits++;

      cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {

      cout << "Miss\n\n";
    }

    numberOfTurns++;
  }
  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";
  cout << "If you play again the game enter 1, if you don't enter 0\n";
  cin >> again;
  if(again==1){
  	goto againto;
  }
  
  return 0;
}
