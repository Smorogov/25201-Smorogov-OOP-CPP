//
// Created by smoro on 19.09.2026.
//

#ifndef TASK_0_2_STORAGE_H
#define TASK_0_2_STORAGE_H
#include <map>
#include <string>
#include <vector>
#include "WordStat.h"
using std::map;
using std::vector;
using std::string;

class Storage {
private:
    bool caseSensitive;
    map<string, int> statisticMap;
    int getWordCount() const;

public:
    Storage(bool caseSensitive = true);
    void addWord(const string& word);
    vector<WordStat> getWordStat() const;
};

#endif //TASK_0_2_STORAGE_H