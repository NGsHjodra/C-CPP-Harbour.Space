//
// Created by mike on 12/22/2022.
//

#include <iostream>
#include "Game.h"
#include "Board.h"

Game::Game(const std::array<Player, 2> &players) : players(players) {
    // No operations.
}

void Game::print_board() {
    for (size_t row = 0; row < Board::SIZE; row++) {
        for (size_t col = 0; col < Board::SIZE; col++) {
            size_t cell = board.get_cell({row, col});
            if (cell == Board::EMPTY) {
                std::cout << '.';
            } else {
                std::cout << players[cell].get_symbol();
            }
        }
        std::cout << std::endl;
    }
}

void Game::run() {
    std::cout << "Let's start the game!" << std::endl;

    for (size_t move = 1; board.has_empty(); move++) {
        size_t player_index = (move - 1) % 2;
        const Player &player = players[player_index];

        std::cout << "Move: " << move
                  << ", player: " << player.get_name()
                  << " (" << player.get_symbol() << ")" << std::endl;

        print_board();

        std::pair<size_t, size_t> coords = player.read_coords(board);
        board.set_cell(coords, player_index);
        if (board.is_win()) {
            std::cout << "Player " << player.get_name() << " won!" << std::endl;
            return;
        }
    }

    std::cout << "Game is over. It is DRAW!" << std::endl;
}

bool Game::ended() {
    std::string answer;
    std::cout << "More? Yes,No :";
    std::cin >> answer;
    return answer == "Yes";
}
