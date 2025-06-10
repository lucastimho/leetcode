"""
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
"""

def solution(s):
    """
    Approach:
    Create a left and right pointer
    Left pointer will increment, right pointer will decrement
    Loop continously to move each pointer
    Make conditionals for both left and right pointer to check alphanumeric characters
    If lowercase pointer do not match return false, otherwise return true
    
    Time Complexity: O()
    Space Complexity: O()
    """
    left, right = 0, len(s) - 1

    while (left < right):
        if not s[left].isalnum():
            left += 1
            continue

        if not s[right].isalnum():
            right -= 1
            continue

        if s[left].lower() != s[right].lower():
            return False
        
        left += 1
        right -= 1
        
    return True

def test_solution():
    # Test case 1
    input1 = "race a car"
    expected1 = False
    assert solution(input1) == expected1, f"Test case 1 failed. Expected {expected1}, got {solution(input1)}"
    
    # Test case 2
    input2 = " "
    expected2 = True
    assert solution(input2) == expected2, f"Test case 2 failed. Expected {expected2}, got {solution(input2)}"
    
    print("All test cases passed!")

if __name__ == "__main__":
    test_solution() 