    //
// Created by smoro on 19.09.2026.
//

#ifndef TASK_0_2_FILEWRITER_H
#define TASK_0_2_FILEWRITER_H

#include <fstream>
#include <string>
#include <vector>
#include "WordStat.h"
using std::vector;
using std::ofstream;
using std::string;



class FileWriter {
private:
    string fileName;
    ofstream outputFile;

public:
    FileWriter(const string& fileName);
    ~FileWriter();
    void write(const vector<WordStat>& sorted);
};

#endif //TASK_0_2_FILEWRITER_H
