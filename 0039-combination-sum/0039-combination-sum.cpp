class Solution {
public:
    vector<vector<int>> ans;
    void rfunc(int i,int n,vector<int>& candidates, int target,vector<int> curr, int sum){
        if(i==n){
            if(sum==target)
                ans.push_back(curr);
            return;
        }

        rfunc(i+1,n,candidates,target,curr,sum);
        curr.push_back(candidates[i]);
        if(sum+candidates[i] <= target){
            rfunc(i,n,candidates,target,curr,sum+candidates[i]);
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        rfunc(0,candidates.size(),candidates,target,curr,0);

        return ans;
    }
};