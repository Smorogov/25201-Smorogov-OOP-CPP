//
// Created by smoro on 27.09.2026.
//

#include "WordStat.h"
using std::to_string;
WordStat::WordStat(string word, int count, double share) {
    this->word = word;
    this->count = count;
    this->share = share;
}
vector<string> WordStat::toLine() {
    vector<string> res;
    res.push_back(this->word);
    res.push_back(to_string(this->count));
    res.push_back(to_string(this->share) + "%");
    return res;
}
    