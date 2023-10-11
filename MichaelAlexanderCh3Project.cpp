// Rock, Paper Scissors
// Summary: Implemented switch statements, nested structures, and 
//decision making structures
// Input: char R/r, P/p, and S/s Output: String message of the two
// Output: choices Player 1 and 2and if there is a winner or tie
#include <iostream>
using namespace std;

int main() {
  char playerOneInput, playerTwoInput, cont('y');
  cout << "Let's play Rock, Paper, Scissors.\n" << endl;

  while(cont == 'y' || cont == 'Y'){
    
    cout << "Player 1: ";
    cin >> playerOneInput;
    
    switch(playerOneInput){
      case 'R':
      case 'r':
        cout << "Player 2: ";
        cin >> playerTwoInput;
        
        switch(playerTwoInput){
          case 'R':
          case 'r':
            cout << "Rock v. Rock" << endl;
            cout << "It's a TIE" << endl;
            break;
            
          case 'P':
          case 'p':
            cout << "Rock v. Paper" << endl;
            cout << "Player 2 wins" << endl; //sus
            // cout << endl;
            break;
          
          case 'S':
          case 's':
            cout << "Rock v. Scissors" << endl;
            cout << "Player 1 wins" << endl;
            break;
          
          default:
            cout << "Rock v. [ERROR: " << playerTwoInput << " not a valid move.]" << endl;
        }
        break;
      
      case 'P':
      case 'p':
        cout << "Player 2: ";
        cin >> playerTwoInput;
        
        switch(playerTwoInput){
          case 'R':
          case 'r':
            cout << "Paper v. Rock" << endl;
            cout << "Player 1 wins" << endl;
            break;
          
          case 'P':
          case 'p':
            cout << "Paper v. Paper" << endl;
            cout << "It's a TIE" << endl;
            break;
          
          case 'S':
          case 's':
            cout << "Paper v. Scissors" << endl;
            cout << "Player 2 wins" << endl;
            break;

          default:
            cout << "Paper v. [ERROR: " << playerTwoInput << " not a valid move.]" << endl;
            break;
        }
      break;
      
      case 'S':
      case 's':
        cout << "Player 2: ";
        cin >> playerTwoInput;
        
        switch(playerTwoInput){
          case 'R':
          case 'r':
            cout << "Scissors v. Rock" << endl;
            cout << "Player 2 wins" << endl;
            break;
          
          case 'P':
          case 'p':
            cout << "Scissors v. Paper" << endl;
            cout << "Player 1 wins" << endl;
            break;
          
          case 'S':
          case 's':
            cout << "Scissors v. Scissors" << endl;
            cout << "It's a TIE" << endl;
            break;

          default:
            cout << "Scissor v. [ERROR: " << playerTwoInput << " not a valid move.]" << endl;
        }
      default:
        cout << "[ERROR: " << playerOneInput <<  " not a valid move.]" << endl;
      break;
      
    }
    cout << endl;
    cout <<"again?\n";
    cin >> cont;
    
  }
    cout << "Nice game!";
  return 0;
}
