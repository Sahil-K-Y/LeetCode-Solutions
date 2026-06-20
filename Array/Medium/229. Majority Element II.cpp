class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m1 = 0, m2 = 1; // different initial values
        int k1 = 0, k2 = 0;

        // Step 1: Find candidates
        for(int i = 0; i < n; i++) {
            if(nums[i] == m1) {
                k1++;
            }
            else if(nums[i] == m2) {
                k2++;
            }
            else if(k1 == 0) {
                m1 = nums[i];
                k1 = 1;
            }
            else if(k2 == 0) {
                m2 = nums[i];
                k2 = 1;
            }
            else {
                k1--;
                k2--;
            }
        }

        // Step 2: Verify counts
        k1 = 0, k2 = 0;
        for(int num : nums) {
            if(num == m1) k1++;
            else if(num == m2) k2++;
        }

        vector<int> ans;
        if(k1 > n/3) ans.push_back(m1);
        if(k2 > n/3) ans.push_back(m2);

        return ans;
    }
};
