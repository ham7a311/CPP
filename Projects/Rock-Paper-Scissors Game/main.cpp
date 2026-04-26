#include <iostream>
#include <ctime>
using namespace std;


char playerChoice();
char computerChoice();
void showChoice(char choice);
void winner(char player, char computer);


int main() {

    char player;
    char computer;

    player = playerChoice();

    cout << "You chose: ";
    showChoice(player);

    computer = computerChoice();

    cout << "Computer chose: ";
    showChoice(computer);

    winner(player, computer);

    return 0;
}


char playerChoice() {

    char player;
    cout << "***Rock-Paper-Scissors Game\n***";

    do {
        cout << "Choose one: ";
        cout << "'r' for Rock";
        cout << "'p' for Paper";
        cout << "'s' for Scissors";
        cin >> player;

    } while(player != 'p' && player != 'p' && player != 's');

    return player;
    
}


char computerChoice() {

    srand(time(0));

    int num = rand() % 3 + 1; // get numbers from 1 to 3

    switch(num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';

    }

    return 0;
}


void showChoice(char choice) {

    switch(choice) {
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;

    }

}


void winner(char player, char computer) {

    switch(player) {
        case 'r': 
                if(computer == 'r') {
                    cout << "Tie";
                } else if(computer == 'p') {
                    cout << "You Lose";
                }else {
                    cout << "You win";
                }
                break;
        case 'p':
                if(computer == 'r') {
                    cout << "You win";
                } else if(computer == 'p') {
                    cout << "Tie";
                }else {
                    cout << "You Lose";
                }
                break;
        case 's':
                if(computer == 'r') {
                    cout << "You Lose";
                } else if(computer == 'p') {
                    cout << "You Win";
                }else {
                    cout << "Tie";
                }
                break;
                
                
    }

}
