#include <iostream>
#include <string>
#include "FileWriter.h"
#include "FileReader.h"
#include "Storage.h"
#include "Parser.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <inputFile.txt> <outputFile.csv>\n";
        return 1;
    }
    FileReader reader(argv[1]);
    string buf;
    Storage storage;
    while (reader.readToBuff(buf)) {
        Parser parser(buf);
        string word;
        while (parser.parse(word)) {
            storage.addWord(word);
        }
    }
    FileWriter writer(argv[2]);
    writer.write(storage.getWordStat());

    return 0;
}