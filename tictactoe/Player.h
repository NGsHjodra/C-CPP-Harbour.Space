//
// Created by mike on 12/22/2022.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H


#include <string>
#include "Board.h"

class Player {
public:
    void read_name();

    [[nodiscard]] std::string get_name() const;

    void set_symbol(char symbol);

    [[nodiscard]] char get_symbol() const;

    [[nodiscard]] std::pair<size_t, size_t> read_coords(const Board &board) const;

private:
    std::string name;
    char symbol;
};


#endif //TICTACTOE_PLAYER_H
