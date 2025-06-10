/*
Problem Title: Longest Substring Without Repeating Characters
Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
Difficulty: [Medium]

Problem Description:
Given a string s, find the length of the longest substring without duplicate characters.

Example:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
using namespace std;

class Solution
{
public:
  /*
  Approach:
  [Write your approach here]

  Time Complexity: O()
  Space Complexity: O()
  */
  int solution(string s)
  {
    // Implementation
    return;
  }
};

void testSolution()
{
  Solution sol;

  // Test case 1
  {
    string s = "bbbbb";
    int expected = 1;
    int result = sol.solution(s);
    if (result == expected)
      cout << "Test case 1 passed!" << endl;
    else
      cout << "Test case 1 failed!" << endl;
  }

  // Test case 2
  {
    string s = "pwwkew";
    int expected = 3;
    int result = sol.solution(s);
    if (result == expected)
      cout << "Test case 1 passed!" << endl;
    else
      cout << "Test case 1 failed!" << endl;
  }

  cout << "All test cases passed!" << endl;
}

int main()
{
  testSolution();
  return 0;
}