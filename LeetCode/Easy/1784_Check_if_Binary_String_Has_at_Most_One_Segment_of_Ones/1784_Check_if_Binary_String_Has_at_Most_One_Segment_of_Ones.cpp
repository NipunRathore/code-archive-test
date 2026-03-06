/**
 * Problem: Check if Binary String Has at Most One Segment of Ones
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-03-06T18:27:11.162Z
 * Performance:
 * Runtime: 0ms (Beats 100.00%)
 * Memory: 8.10MB (Beats 77.26%)
 */

class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};
// T.C. = O(n)
// S.C. = O(1)