//
// Created by mike on 12/22/2022.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H


#include <array>
#include <cstdlib>
#include <limits>

class Board {
public:
    static constexpr const size_t SIZE = 3;
    static constexpr const size_t EMPTY = std::numeric_limits<size_t>::max();

    Board();

    [[nodiscard]] size_t get_cell(const std::pair<size_t, size_t> &coords) const;

    void set_cell(std::pair<size_t, size_t> coords, size_t player_index);

    bool is_win();

    bool has_empty();

private:
    std::array<std::array<size_t, SIZE>, SIZE> cells{};
};


#endif //TICTACTOE_BOARD_H
