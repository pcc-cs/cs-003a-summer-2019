#include <gtest/gtest.h>
#include <set>
#include <string>
#include <algorithm>
#include "ex2.h"

void testAnagrams(std::vector<std::string> actual) {
  String str("abc");
  std::set<std::string> expected = {
    "abc", "acb", "bac", "bca", "cab", "cba"
  };
  for (auto e : expected) {
    EXPECT_TRUE((std::find(actual.begin(), actual.end(), e) != actual.end()));
  }
  EXPECT_EQ(expected.size(), actual.size());
}

TEST(String, iAnagrams) {
  String str("abc");
  testAnagrams(str.iAnagrams());
}

TEST(String, rAnagrams) {
  String str("abc");
  testAnagrams(str.rAnagrams());
}
