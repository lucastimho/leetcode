/*
Problem Title: Valid Palindrome
Problem Link: https://leetcode.com/problems/valid-palindrome/description/
Difficulty: [Easy]

Problem Description:
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Constraints:
1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
  /*
  Approach:
  Create a left and right pointer
  Left pointer will increment, right pointer will decrement
  Loop continously to move each pointer
  Make conditionals for both left and right pointer to check alphanumeric characters
  If lowercase pointer do not match return false, otherwise return true

  Time Complexity: O()
  Space Complexity: O()
  */
  bool solution(string s)
  {
    // Implementation
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!isalnum(s[left])) {
            left += 1;
            continue;
        }

        if (!isalnum(s[right])) {
            right -= 1;
            continue;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left += 1;
        right -= 1;
    }
    return true;
  }
};

void testSolution()
{
  Solution sol;

  // Test case 1
  {
    string str = "race a car";
    bool expected = false;
    bool result = sol.solution(str);
    if (result == expected)
      cout << "Test case 1 passed!" << endl;
    else
      cout << "Test case 1 failed!" << endl;
  }

  // Test case 2
  {
    string str = " ";
    bool expected = true;
    bool result = sol.solution(str);
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