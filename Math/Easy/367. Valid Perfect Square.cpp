class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;
        if (num == 1) return true;
        
        long long i = 1, j = num / 2;
        
        while (i <= j) {
            long long mid = i + (j - i) / 2;
            long long square = mid * mid;
            
            if (square == num) {
                return true;
            } else if (square < num) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }
};
