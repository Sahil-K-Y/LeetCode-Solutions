class Solution{
public:
    vector<int> findAnagrams(string s, string p){
        vector<int>countP(26, 0), window(26, 0),ans;
        int k=p.size();
        int n=s.size();
        if (n < k) return {};
        for(int i=0;i<k;i++){
            window[s[i]-'a']++;
            countP[p[i]-'a']++;
        }
        if(window==countP)ans.push_back(0);
        for(int i=k;i<n;i++){
            window[s[i]-'a']++;
            window[s[i-k]-'a']--;
            if(countP==window){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};

