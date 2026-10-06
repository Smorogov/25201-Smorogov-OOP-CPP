//
// Created by smoro on 19.09.2026.
//

#include "FileReader.h"
using std::string;
using std::getline;


FileReader::FileReader(const string& fileName) {
    this->fileName = fileName;
    this->inputFile.open(fileName);
}

FileReader::~FileReader() {
    this->inputFile.close();
}

bool FileReader::readToBuff(string& buff){
    getline(inputFile, buff);
    return !inputFile.eof();
}

