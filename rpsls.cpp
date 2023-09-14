#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userChoice, computerChoice, userScore = 0, computerScore = 0;

    while (true) {
        // Display user's score
        cout << "Your score: " << userScore << endl;

        // Display the menu
        cout << "Enter your choice (0-Rock, 1-Paper, 2-Scissors, 3-Lizard, 4-Spock, 5-Quit): ";
        cin >> userChoice;

        // Check for quit option
        if (userChoice == 5) {
            break;
        }

        // Generate a random computer choice (0 to 4)
        srand(static_cast<unsigned int>(time(nullptr)));
        computerChoice = rand() % 5;

        // Display computer's choice
        cout << "Computer's choice: " << computerChoice << endl;

        // Compare user and computer choices
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && (computerChoice == 2 || computerChoice == 3)) ||
                   (userChoice == 1 && (computerChoice == 0 || computerChoice == 4)) ||
                   (userChoice == 2 && (computerChoice == 1 || computerChoice == 3)) ||
                   (userChoice == 3 && (computerChoice == 1 || computerChoice == 4)) ||
                   (userChoice == 4 && (computerChoice == 0 || computerChoice == 2))) {
            cout << "You win!" << endl;
            userScore++;
        } else {
            cout << "You lose!" << endl;
            computerScore++;
        }
    }

    // Display final scores
    cout << "Final scores:" << endl;
    cout << "Your score: " << userScore << endl;
    cout << "Computer's score: " << computerScore << endl;

    return 0;
}
