class Solution {
public:
    bool isHappy(int n) {
        int ans=n;
        if(n==1) return true;
        set<int> s;
        while(ans!=1){
            int temp=ans;
            ans=0;
            while(temp!=0){
                int digit=temp%10;
                ans+=digit*digit;
                temp/=10;
            }
            
            if(s.count(ans)){
                return false;
            }
            s.insert(ans);
        }
        return true;
    }
};