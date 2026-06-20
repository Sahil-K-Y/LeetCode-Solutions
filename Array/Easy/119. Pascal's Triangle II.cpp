class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1);
        long long val = 1;

        for (int j = 0; j <= rowIndex; j++) {
            ans[j] = val;
            val = val * (rowIndex - j) / (j + 1);
        }

        return ans;
    }
};
