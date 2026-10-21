//
// Created by smoro on 27.09.2026.
//

#include "Parser.h"

Parser::Parser(string buf) {
    int firstWord = -1;
    for (int i = 0; i < buf.length(); i++) {
        if ('a' <= buf[i] && buf[i] <= 'z' || 'A' <= buf[i] && buf[i] <= 'Z' ) {
            firstWord = i;
            break;
        }
    }
    if (firstWord == -1) {
        this->buf = "";
        return;
    }
    this->buf = buf.substr(firstWord);
}


string Parser::getNextWord() {
    string word;
    for (int i = 0; i < buf.length(); i++) {
        char c = buf[i];
        if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' ) {
            word += c;
            continue;
        }
        break;
    }

    int newWord = -1;
    for (int i = word.length(); i < buf.length(); i++) {
        if ('a' <= buf[i] && buf[i] <= 'z' || 'A' <= buf[i] && buf[i] <= 'Z' ) {
            newWord = i;
            break;
        }
    }
    if (newWord == -1) {
        buf = "";
        return word;
    };
    buf = buf.substr(newWord);
    return word;
}

bool Parser::hasNextWord() {
    return !buf.empty();
}
