//
// Created by smoro on 27.09.2026.
//

#ifndef TASK_0_2_PARSER_H
#define TASK_0_2_PARSER_H
#include <string>
using std::string;

class Parser {
private:
    string buf;

public:
    Parser(string buf);
    /// Разбивает строчку на слова
    /// @return слово
    string getNextWord();
    bool hasNextWord();
};


#endif //TASK_0_2_PARSER_H
