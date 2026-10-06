//
// Created by smoro on 27.09.2026.
//

#include "Parser.h"

Parser::Parser(string buf) {
    this->buf = buf;
}

/// Разбивает строчку на слова
/// @param word отдельное слово в строке
/// @return true в случае, если конец строки не достигнут
bool Parser::parse(string& word) {
    word = "";
    int firstWord = -1;
    for (int i = 0; i < buf.length(); i++) {
        if ('a' <= buf[i] && buf[i] <= 'z' || 'A' <= buf[i] && buf[i] <= 'Z' ) {
            firstWord = i;
            break;
        }
    }
    if (firstWord == -1) {
        return false;
    }

    for (int i = firstWord; i < buf.length(); i++) {
        char c = buf[i];
        if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' ) {
            word += c;
            continue;
        }
        break;
    }
    int newWord = -1;
    for (int i = word.length() + firstWord; i < buf.length(); i++) {
        if ('a' <= buf[i] && buf[i] <= 'z' || 'A' <= buf[i] && buf[i] <= 'Z' ) {
            newWord = i;
            break;
        }
    }
    if (newWord == -1) {
        return false;
    };
    buf = buf.substr(newWord);
    return true;

}