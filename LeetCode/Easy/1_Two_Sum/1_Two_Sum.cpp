/**
 * Problem: Two Sum
 * Platform: LeetCode
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-01-26T14:01:18.346Z
 * Performance:
 * Runtime: 135ms (Beats 5.00%)
 * Memory: 13.99MB (Beats 93.62%)
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
// testing ui now 