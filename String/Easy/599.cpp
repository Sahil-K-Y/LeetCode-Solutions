class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]] = i;
        }

        // unordered_set<string> s;
        int mini = INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i]) != mp.end()){
                mini = min(mini,(mp[list2[i]]+i));
            }
        }

        vector<string> ans;
        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i]) != mp.end()){
                if(mp[list2[i]]+i == mini){
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};