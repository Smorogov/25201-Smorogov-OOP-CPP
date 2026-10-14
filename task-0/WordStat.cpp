//
// Created by smoro on 27.09.2026.
//

#include "WordStat.h"
WordStat::WordStat(string word, int count, double share) {
    this->word = word;
    this->count = count;
    this->share = share;
}

string WordStat::toString() const {
    string s = this->word + "," + std::to_string(this->count)+ "," + std::to_string(this->share) + "%";
    return s;
}
    