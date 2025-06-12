"""
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
"""

def solution(s):
    """
    Approach:
    [Write your approach here]
    
    Time Complexity: O()
    Space Complexity: O()
    """
    char = set()
    left = 0
    length = 0

    for right in range(len(s)):
        while s[right] in char:
            char.remove(s[left])
            left += 1
        char.add(s[right])
        length = max(length, right - left + 1)
    return length

def test_solution():
    # Test case 1
    input1 = "bbbbb"
    expected1 = 1
    assert solution(input1) == expected1, f"Test case 1 failed. Expected {expected1}, got {solution(input1)}"
    
    # Test case 2
    input2 = "pwwkew"
    expected2 = 3
    assert solution(input2) == expected2, f"Test case 2 failed. Expected {expected2}, got {solution(input2)}"
    
    print("All test cases passed!")

if __name__ == "__main__":
    test_solution() 