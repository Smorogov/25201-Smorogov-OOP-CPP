//
// Created by smoro on 19.09.2026.
//

#include "CSVWriter.h"


CSVWriter::CSVWriter(const string& fileName) {
    this->fileName = fileName;
    this->outputFile.open(fileName);
}

CSVWriter::~CSVWriter() {
    this->outputFile.close();
}

void CSVWriter::write(const vector<string> &words) {
    for (size_t i = 0; i < words.size(); ++i) {
        outputFile << words[i];
        if (i < words.size() - 1) {
            outputFile << ',';
        }

    }
    outputFile << "\n";
}