class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;
        long long j = floor(sqrt(c));
        while (i <= j) {
            long long total = i * i + j * j;
            if (total == c) {
                return true;
            } else if (total > c) {
                j--;
            } else {
                i++;
            }
        }
        return false;
    }
};
