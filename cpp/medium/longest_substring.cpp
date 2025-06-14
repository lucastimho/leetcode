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
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution
{
public:
  /*
  Approach:
  Create a set of characters
  Intialize a left pointer and length to zero
  Iterate through the string using a right pointer
  While the right pointer character is in the set, erase the left pointer character and increment the left pointer
  Insert the right pointer character to the set
  Let length be the maximum value of the established length or the difference between the right and left pointer plus 1

  Time Complexity: O(n)
  Space Complexity: O(n)
  */
  int solution(string s)
  {
    // Implementation
    unordered_set<char> set;
    int left = 0;
    int length = 0;
    for (int right = 0; right < s.length(); ++right) {
      while (set.count(s[right])) {
        set.erase(s[left]);
        left++;
      }
      set.insert(s[right]);
      length = max(length, right - left + 1);
    }
    return length;
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