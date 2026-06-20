class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.length()-1;
        int ans=0;
        while(j>=0){
            if(s[j]!=' '){
                while(j>=0&&s[j]!=' '){
                    ans++;
                    j--;
                }
                return ans;
            }
            j--;
        }
        return ans;
    }
};
