#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

    int pointu = 0;
    int pointpc = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    for (int counter = 1; counter <= 6; counter++) {
        std::string choices[3] = {"✊ Rock", "✋ Paper", "✌️ Scissors"};
        std::cout << "1) " << choices[0] << "\n";
        std::cout << "2) " << choices[1] << "\n";
        std::cout << "3) " << choices[2] << "\n";
        std::cout << "Shoot! \n";

        int user;
        std::cin >> user;

        int computer = rand() % 3 + 1;

        if (user == computer) {
            std::cout << "It's a tie!\n";
        } else if ((user == 1 && computer == 3) ||
                   (user == 2 && computer == 1) ||
                   (user == 3 && computer == 2)) {
            std::cout << choices[user - 1] << "! You got me this time.\n";
            pointu++;
        } else {
            std::cout << choices[computer - 1] << "! I win this round.\n";
            pointpc++;
        }
    }

    if (pointu > pointpc) {
        std::cout << "You win this game!\n";
    } else if (pointpc > pointu) {
        std::cout << "I win this game!\n";
    } else {
        std::cout << "It's a draw.\n";
    }

    return 0;
}
