#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
class RockPaperScissors {

public:
  
    char getUserOption() {
        char choice;
        cout << "Rock, Paper, Scissors Game!" << endl;
        cout << "Choose one of the following options:" << endl;
        cout << "1. Rock (press 'r')" << endl;
        cout << "2. Paper (press 'p')" << endl;
        cout << "3. Scissors (press 's')" << endl;
        cout << "Your choice: ";
        cin >> choice;
        return choice;
    }
    char getComputerOption() {
        srand(time(0));
        int num = (rand() % 3) + 1;
       
        if (num == 1)
            return 'r';
        else if (num == 2)
            return 'p';
        else
            return 's';
    }
    void determineWinner(char userChoice, char computerChoice) {
        cout << "Your choice: ";
        displayOption(userChoice);
        cout << "Computer's choice: ";
        displayOption(computerChoice);

        if (userChoice == computerChoice)
            cout << "It's a tie!" << endl;
        else if ((userChoice == 'r' && computerChoice == 's') ||
                 (userChoice == 'p' && computerChoice == 'r') ||
                 (userChoice == 's' && computerChoice == 'p'))
            cout << "Congratulations! You win!" << endl;
        else
            cout << "Sorry! Computer wins!" << endl;
    }
    void displayOption(char option) {
        if (option == 'r')
            cout << "Rock" << endl;
        else if (option == 'p')
            cout << "Paper" << endl;
        else if (option == 's')
            cout << "Scissors" << endl;
    }
};

int main() {
    RockPaperScissors game;
    char userChoice, computerChoice;

    char playAgain;
    do {
        userChoice = game.getUserOption();
        
        computerChoice = game.getComputerOption();
       
        game.determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

