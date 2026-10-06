//
// Created by smoro on 06.10.2026.
//

#include <gtest/gtest.h>
#include "Parser.h"

TEST(ParserTest, First) {
    string str = "Hello";
    Parser parser(str);
    string word;
    bool end = parser.parse(word);

    ASSERT_EQ("Hello", word);
    ASSERT_EQ(false, end);
}

TEST(ParserTest, Second) {
    string str = "Hello, World!";
    Parser parser(str);
    string word;
    bool end = parser.parse(word);

    ASSERT_EQ("Hello", word);
    ASSERT_EQ(true, end);

    end = parser.parse(word);
    ASSERT_EQ("World", word);
    ASSERT_EQ(false, end);
}

TEST(ParserTest, Third) {
    string str = "\n Hello \n\n World \n!";
    Parser parser(str);
    string word;
    bool end = parser.parse(word);

    ASSERT_EQ("Hello", word);
    ASSERT_EQ(true, end);

    end = parser.parse(word);
    ASSERT_EQ("World", word);
    ASSERT_EQ(false, end);
}

TEST(ParserTest, Fourth) {
    string str = "\n Hello ^^^**95395985955995 \n\n 664612%##@)! \t World \n!";
    Parser parser(str);
    string word;
    bool end = parser.parse(word);

    ASSERT_EQ("Hello", word);
    ASSERT_EQ(true, end);

    end = parser.parse(word);
    ASSERT_EQ("World", word);
    ASSERT_EQ(false, end);
}

TEST(ParserTest, Fifth) {
    string str = "";
    Parser parser(str);
    string word;
    bool end = parser.parse(word);

    ASSERT_EQ("", word);
    ASSERT_EQ(false, end);
}