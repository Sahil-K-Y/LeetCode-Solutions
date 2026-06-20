class Solution {
public:
    int firstUniqChar(string s) {
        queue<pair<char,int>>q;
        int fre[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            char c=s[i];
            fre[c-'a']++;
            q.push({c,i});
            while(!q.empty() && fre[q.front().first-'a']>1){
                q.pop();
            }
        }
        if(q.empty()){
            return -1;
        }
        return q.front().second;
    }
};
