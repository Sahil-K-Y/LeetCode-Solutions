class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            while(set.find(s[i])!=set.end()){
                set.erase(s[start]);
                start++;
            }
            set.insert(s[i]);
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};
