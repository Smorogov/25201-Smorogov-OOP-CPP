//
// Created by smoro on 27.09.2026.
//

#ifndef TASK_0_2_WORDSTAT_H
#define TASK_0_2_WORDSTAT_H
#include <string>
#include <vector>
using std::string;
using std::vector;

struct WordStat {
    string word;
    int count;
    double share;

    WordStat(string word, int count, double share);
    vector<string> toLine();
};
#endif //TASK_0_2_WORDSTAT_H
