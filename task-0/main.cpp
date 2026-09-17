#include <algorithm>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    if (argc < 3) {
        return 1;
    }
    ifstream in(argv[1]);
    string line;
    map<string, int> counter;
    while (getline(in, line, '\n')) {
        stringstream ss(line);
        string word;
        while (getline(ss, word, ' ')) {
            if (counter.find(word) == counter.end()) {
                counter[word] = 0;
            }
            counter[word] ++;
        }
    }
    in.close();

    vector<pair<string, int>> vec(counter.begin(), counter.end());
    sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    });


    ofstream out(argv[2]);

    int wordSum = 0;
    for (auto& word : vec) {
        wordSum += word.second;
    }

    for (auto wordCount = vec.rbegin(); wordCount != vec.rend(); ++wordCount) {
        out << wordCount->first << "," << wordCount->second << "," << static_cast<double>(wordCount->second) / wordSum * 100 << "%\n";
    }
    out.close();
    return 0;
}
