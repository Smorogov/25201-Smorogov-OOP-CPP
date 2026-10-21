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

class CSVWriter {
private:
    string fileName;
    ofstream outputFile;

public:
    CSVWriter(const string& fileName);
    ~CSVWriter();
    void write(const vector<string> &text);
};

#endif //TASK_0_2_FILEWRITER_H
