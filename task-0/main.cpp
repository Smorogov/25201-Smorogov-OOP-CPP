#include <iostream>
#include <string>
#include "FileWriter.h"
#include "FileReader.h"
#include "Storage.h"
#include "Parser.h"

using std::cout;
using std::string;
using std::vector;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <inputFile.txt> <outputFile.csv>\n";
        return 1;
    }
    FileReader reader(argv[1]);
    Storage storage;
    while (reader.hasNextLine()) {
        string buf = reader.getNextLine();
        Parser parser(buf);
        while (parser.hasNextWord()) {
            string word = parser.getNextWord();
            storage.addWord(word);
        }
    }
    auto wordStats = storage.getWordStat();
    vector<string> stats;
    for (auto& word : wordStats) {
        stats.push_back(word.toString());
    }
    FileWriter writer(argv[2]);
    writer.write(stats);

    return 0;
}