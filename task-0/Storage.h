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
    ///Получение общего количества слов
    int getWordCount() const;

public:
    Storage(bool caseSensitive = true);
    void addWord(const string& word);
    /// Получение статистики по словам
    /// @return вектор статистик слов (WordStat), отсортированный по убыванию частоты
    vector<WordStat> getWordStat() const;
};

#endif //TASK_0_2_STORAGE_H