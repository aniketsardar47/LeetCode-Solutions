class Solution {
public:
    void get_permutations(vector<vector<int>> &ans,int ind,vector<int> &nums){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            get_permutations(ans,ind+1,nums);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        get_permutations(ans,0,nums);
        return ans;
    }
};