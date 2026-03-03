/**
 * Problem: Two Sum
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-03-03T19:30:36.380Z
 * Performance:
 * Runtime: 139ms (Beats 5.24%)
 * Memory: 14.10MB (Beats 80.28%)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> elementIndex ;
        for (int i =0 ; i<nums.size();i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    elementIndex.push_back(i);
                    elementIndex.push_back(j);
                    // elementIndex[0]=i;
                    // elementIndex[1]=j;
                    // break;
                }
            }
        }
        return elementIndex;
    }
};
// T.C. = O(N^2)
// Testing Code Archive extension by @NipunRathore
// solution + readme + images + stats
// testing ui bar chart now 