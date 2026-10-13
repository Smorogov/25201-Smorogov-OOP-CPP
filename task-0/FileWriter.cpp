//
// Created by smoro on 19.09.2026.
//

#include "FileWriter.h"
using std::endl;


FileWriter::FileWriter(const string& fileName) {
    this->fileName = fileName;
    this->outputFile.open(fileName);
}

FileWriter::~FileWriter() {
    this->outputFile.close();
}

void FileWriter::write(const vector<string> &text) {
    for (const string& word : text) {
        this->outputFile << word << endl;
    }
}