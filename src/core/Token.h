#pragma once
#include <string>
#include "TokenType.h"

struct Token {
    TokenType type;
    std::string lexeme;
    double numericValue;
    size_t position;

    Token(TokenType t, const std::string l, size_t pos)
        : type(t), lexeme(l), numericValue(0.0), position(pos) {}
};