class Solution {
public:
    int value(char c){
        if(c==73) return 1;     // 'I'
        if(c==86) return 5;     // 'V'
        if(c==88) return 10;    // 'X'
        if(c==76) return 50;    // 'L'
        if(c==67) return 100;   // 'C'
        if(c==68) return 500;   // 'D'
        if(c==77) return 1000;  // 'M'
        return 0;
    }
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && value(s[i])<value(s[i+1])){
                ans-=value(s[i]);
            }else{
                ans+=value(s[i]);
            }
        }
        return ans;
    }
};
