/*
Problem Title: Two Sum
Problem Link: https://leetcode.com/problems/two-sum/
Difficulty: [Easy]

Problem Description:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  /*
  Approach:
  Make an unordered map of numbers seen
  Iterate through the vector of numbers
  Create a complement variable
  If the count matches the complement, return the complement index (map.count()) and current index
  Else edit the map entry to vector[i]: i

  Time Complexity: O(n)
  Space Complexity: O(n)
  */
  vector<int> solution(vector<int>& nums, int target)
  {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.count(complement)) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
  }
};

void testSolution()
{
  Solution sol;

  // Test case 1
  {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> expected = {0, 1};
    vector<int> result = sol.solution(nums, target);
    if (result == expected)
      cout << "Test case 1 passed!" << endl;
    else
      cout << "Test case 1 failed!" << endl;
  }

  // Test case 2
  {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> expected = {1, 2};
    vector<int> result = sol.solution(nums, target);
    if (result == expected)
      cout << "Test case 2 passed!" << endl;
    else
      cout << "Test case 2 failed!" << endl;
  }

  cout << "All test cases passed!" << endl;
}

int main()
{
  testSolution();
  return 0;
}