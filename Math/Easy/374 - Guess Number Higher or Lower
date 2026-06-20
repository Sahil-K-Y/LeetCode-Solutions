class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int g = guess(mid);          // call once

            if (g == 0) {                // num == pick
                return mid;
            } else if (g == 1) {         // num < pick -> go right
                low = mid + 1;
            } else {                     // g == -1, num > pick -> go left
                high = mid - 1;
            }
        }
        return -1; // should never be reached for valid inputs
    }
};
