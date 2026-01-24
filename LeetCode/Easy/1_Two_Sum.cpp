/**
 * Problem: Two Sum
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Language: cpp
 * Date: 2026-01-24T09:10:01.825Z
 */

class Solution {class Solution {
public:public:
    vector<int> twoSum(vector<int>& nums, int target) {    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> elementIndex ;        vector<int> elementIndex ;
        for (int i =0 ; i<nums.size();i++)        for (int i =0 ; i<nums.size();i++)
        {        {
            for (int j=i+1;j<nums.size();j++)            for (int j=i+1;j<nums.size();j++)
            {            {
                if (nums[i]+nums[j]==target)                if (nums[i]+nums[j]==target)
                {                {
                    elementIndex.push_back(i);                    elementIndex.push_back(i);
                    elementIndex.push_back(j);                    elementIndex.push_back(j);
                    // elementIndex[0]=i;                    // elementIndex[0]=i;
                    // elementIndex[1]=j;                    // elementIndex[1]=j;
                    // break;                    // break;
                                        
                }                }
            }            }