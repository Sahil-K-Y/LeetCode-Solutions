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
 * Problem: 796. Rotate String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/rotate-string/
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        string concatenated = s + s;
        return concatenated.find(goal) != string::npos;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "abcde", goal1 = "cdeab";
    cout << "Test Case 1: " << (sol.rotateString(s1, goal1) ? "Passed" : "Failed") << endl;

    // Test Case 2
    string s2 = "abcde", goal2 = "abced";
    cout << "Test Case 2: " << (!sol.rotateString(s2, goal2) ? "Passed" : "Failed") << endl;

    return 0;
}
