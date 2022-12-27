//
// Created by mike on 12/22/2022.
//

#include <vector>
#include "Board.h"

Board::Board() {
    for (auto &row: cells) {
        std::fill(row.begin(), row.end(), EMPTY);
    }
}

size_t Board::get_cell(const std::pair<size_t, size_t> &coords) const {
    return cells[coords.first][coords.second];
}

void Board::set_cell(std::pair<size_t, size_t> coords, size_t player_index) {
    cells[coords.first][coords.second] = player_index;
}

bool Board::is_win() {
    static const std::vector<int> D_ROW = {0, 1, 1, -1};
    static const std::vector<int> D_COL = {1, 0, 1, 1};

    for (int row = 0; row < Board::SIZE; row++) {
        for (int col = 0; col < Board::SIZE; col++) {
            if (cells[row][col] != Board::EMPTY) {
                for (size_t d = 0; d < D_ROW.size(); d++) {
                    bool same = true;
                    int r = row, c = col;
                    for (size_t i = 0; i < Board::SIZE; i++) {
                        if (r < 0 || r >= Board::SIZE
                            || c < 0 || c >= Board::SIZE
                            || cells[r][c] != cells[row][col]) {
                            same = false;
                            break;
                        }
                        r += D_ROW[d];
                        c += D_COL[d];
                    }
                    if (same) {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-use-anyofallof"

bool Board::has_empty() {
    for (const auto &row: cells) {
        if (std::find(row.begin(), row.end(), EMPTY) != row.end()) {
            return true;
        }
    }
    return false;
}

#pragma clang diagnostic pop
