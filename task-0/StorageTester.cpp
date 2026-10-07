//
// Created by smoro on 06.10.2026.
//

#include <gtest/gtest.h>
#include "Storage.h"

TEST(StorageTester, First) {
    Storage storage;
    string word = "Hello";
    storage.addWord(word);

    auto stat = storage.getWordStat();
    ASSERT_EQ(stat[0].count, 1);
}

TEST(StorageTester, Second) {
    Storage storage;
    string words[] = {"Hello", "World", "Sunday", "FitFija"};
    for (auto word : words) {
        storage.addWord(word);
    }

    auto stat = storage.getWordStat();
    for (auto s: stat) {
        ASSERT_EQ(s.count, 1);
        ASSERT_EQ(s.share, 25.0);
    }
}

TEST(StorageTester, Third) {
    Storage storage;
    string words[] = {"Hello", "World", "World", "World", "Hello"};
    for (auto word : words) {
        storage.addWord(word);
    }

    auto stat = storage.getWordStat();
    ASSERT_EQ(stat[0].word, "World");
    ASSERT_EQ(stat[1].word, "Hello");
    ASSERT_EQ(stat[0].count, 3);
    ASSERT_EQ(stat[1].count, 2);
}

TEST(StorageTester, Fourth) {
    Storage storage;

    auto stat = storage.getWordStat();
    ASSERT_EQ(stat.size(), 0);
}