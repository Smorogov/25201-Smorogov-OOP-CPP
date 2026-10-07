//
// Created by smoro on 19.09.2026.
//
#ifndef TASK_0_2_FILEREADER_H
#define TASK_0_2_FILEREADER_H

#include <fstream>
#include <string>
using std::string;
using std::ifstream;


class FileReader {
private:
    string fileName;
    ifstream inputFile;

public:
    FileReader(const string& fileName);
    ~FileReader();
    bool readToBuff(string& buff);
};

#endif //TASK_0_2_FILEREADER_H