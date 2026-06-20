class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        string ans="";
        while(i>=0 || j>=0||carry){
            int sum=carry;
            if(i>=0)sum+=num1[i--]-'0';
            if(j>=0)sum+=num2[j--]-'0';
            carry=sum/10;
            ans.push_back(sum%10+'0');
        }
        // while(i>=0){
        //     int sum=int(num1[i])+carry;
        //     carry=0;
        //     ans+=to_string(sum);
        // }
        // while(j>=0){
        //     int sum=int(num2[j])+carry;
        //     carry=0;
        //     ans+=to_string(sum);
        // }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
