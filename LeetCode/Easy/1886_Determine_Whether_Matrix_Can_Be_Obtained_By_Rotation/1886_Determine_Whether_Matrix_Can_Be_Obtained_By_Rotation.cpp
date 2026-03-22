/**
 * Problem: Determine Whether Matrix Can Be Obtained By Rotation
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-03-22T11:06:47.514Z
 * Performance:
 * Runtime: 0ms (Beats 100.00%)
 * Memory: 14.67MB (Beats 41.55%)
 */

class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
        // Rotate = reverse + transpose 
        // using inbuilt functions 

        reverse(matrix.begin(), matrix.end()) ; 
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        for (int i = 0 ; i < n ; i ++)
        {
            for (int j = i ; j < m ; j ++)
            {
                swap(matrix[i][j], matrix[j][i]) ; 
            }
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // there are only 4 rotations possible, if any of the four rotations matches to teget array return true else false 
        for (int i = 0 ; i < 4 ; i ++)
        {
            if (mat == target)
            {
                return true ; 
            }
            rotate(mat) ; 
        }
        return false ; 
    }
};

// Code Archive