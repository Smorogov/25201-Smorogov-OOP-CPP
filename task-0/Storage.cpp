    #include "Storage.h"
    #include <sstream>
    #include <algorithm>
    using std::sort;

    void Storage::addWord(const string& word) {
        if (statisticMap.find(word) == statisticMap.end()) {
            statisticMap[word] = 0;
        }
        statisticMap[word]++;
    }

    ///Получение общего количества слов
    int Storage::getWordCount() const {
        int count = 0;
        for (const auto& pair : statisticMap) {
            count += pair.second;
        }
        return count;
    }

    /// Получение статистики по словам
    /// @return вектор статистик слов (WordStat), отсортированный по убыванию частоты
    vector<WordStat> Storage::getWordStat() const {
        int totalCount = getWordCount();
        vector<WordStat> wordStats;
        for (const auto& item : statisticMap) {
            double share = (static_cast<double>(item.second) / totalCount) * 100.0;
            WordStat wordStat(item.first, item.second, share);
            wordStats.push_back(wordStat);
        }

        sort(wordStats.begin(), wordStats.end(),
        [](const WordStat& a, const WordStat& b) {
                if (a.count == b.count) {
                    return a.word < b.word;
                }
                return a.count > b.count;
            }
        );

        return wordStats;
    }