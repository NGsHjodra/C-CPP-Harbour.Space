//
// Created by mike on 12/22/2022.
//

#include <iostream>
#include "Player.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"

std::string trim(std::string s) {
    int left = 0;
    while (left < s.length() && s[left] <= ' ') {
        left++;
    }

    int right = int(s.length()) - 1;
    while (right >= 0 && s[right] <= ' ') {
        right--;
    }

    if (left <= right) {
        return s.substr(left, right - left + 1);
    } else {
        return "";
    }
}

void Player::read_name() {
    do {
        std::cout << "Please, enter the name:" << std::endl;
        std::getline(std::cin, name);
        name = trim(name);
    } while (name.empty());
}

std::string Player::get_name() const {
    return name;
}

void Player::set_symbol(char symbol) {
    this->symbol = symbol;
}

char Player::get_symbol() const {
    return symbol;
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-convert-member-functions-to-static"

std::pair<size_t, size_t> Player::read_coords(const Board &board) const {
    std::pair<size_t, size_t> coords;

    do {
        std::cout << "Please, enter coordinates of empty cell as integers between 0 and "
                  << Board::SIZE - 1 << ":" << std::endl;

        std::cin >> coords.first >> coords.second;
    } while (coords.first >= Board::SIZE
             || coords.second >= Board::SIZE
             || board.get_cell(coords) != Board::EMPTY);

    return coords;
}

#pragma clang diagnostic pop

#pragma clang diagnostic pop
