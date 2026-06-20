#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>

using namespace std;

/*
 * Problem: 3884. First Matching Character From Both Ends
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/first-matching-character-from-both-ends/
 */

class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int i = 0;
        int j = n - i - 1;
        while (i <= j) {
            if (s[i] == s[j]) return i;
            i++;
            j--;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    return 0;
}
