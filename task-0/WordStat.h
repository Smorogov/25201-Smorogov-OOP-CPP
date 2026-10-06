//
// Created by smoro on 27.09.2026.
//

#ifndef TASK_0_2_WORDSTAT_H
#define TASK_0_2_WORDSTAT_H
#include <string>
using std::string;

struct WordStat {
    string word;
    int count;
    double share;

    WordStat(string word, int count, double share);
};
#endif //TASK_0_2_WORDSTAT_H
