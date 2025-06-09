"""
Problem Title: Two Sum
Problem Link: https://leetcode.com/problems/two-sum/
Difficulty: [Easy]

Problem Description:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
"""

def solution(nums, target):
    """
    Approach:
    Make hashmap of seen nums
    
    Time Complexity: O()
    Space Complexity: O()
    """

    seen = {}

    pass

def test_solution():
    # Test case 1
    input1 = [3, 2, 4]
    input2 = 6
    expected1 = [1, 2]
    assert solution(input1, input2) == expected1, f"Test case 1 failed. Expected {expected1}, got {solution(input1, input2)}"
    
    # Test case 2
    input3 = [3, 3]
    input4 = 6
    expected2 = [0, 1]
    assert solution(input3, input4) == expected2, f"Test case 2 failed. Expected {expected2}, got {solution(input3, input4)}"
    
    print("All test cases passed!")

if __name__ == "__main__":
    test_solution() 