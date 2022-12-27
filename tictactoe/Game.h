//
// Created by mike on 12/22/2022.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H


#include <array>
#include "Player.h"
#include "Board.h"

class Game {
public:
    explicit Game(const std::array<Player, 2> &players);

    void run();

    static bool ended();

private:
    const std::array<Player, 2> &players;
    Board board;

    void print_board();
};


#endif //TICTACTOE_GAME_H
