class Solution {
public:
    TreeNode* convert(vector<int>& nums,int st,int end){
        if(st>end){
            return nullptr;
        }
        int mid = st + (end - st) / 2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=convert(nums,st,mid-1);
        root->right=convert(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0,nums.size()-1);
    }
};
