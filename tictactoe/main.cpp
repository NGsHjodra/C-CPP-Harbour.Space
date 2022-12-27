#include <array>
#include <iostream>
#include "Player.h"
#include "Game.h"

bool gameEnd() {
    std::string answer;
    std::cout << "More? Yes,No :";
    std::cin >> answer;
    return answer == "Yes";
}

int main() {
    std::array<Player, 2> players;

    for (auto &player: players) {
        player.read_name();
    }

    int totalgame = 0;

    std::array<char, 2> symbols = {'X', 'O'};

    do {
        players[0].set_symbol(symbols[totalgame % 2]);
        players[1].set_symbol(symbols[(totalgame + 1) % 2]);
        totalgame++;
        Game game(players);
        game.run();
    } while (gameEnd());

    std::cout << totalgame << std::endl;

    return 0;
}

