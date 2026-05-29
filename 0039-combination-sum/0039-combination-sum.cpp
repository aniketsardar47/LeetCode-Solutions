class Solution {
public:
    vector<vector<int>> ans;
    void rfunc(vector<int>& candidates, int target,vector<int> curr, int sum){
        if(sum == target){
            sort(curr.begin(),curr.end());
            if(find(ans.begin(),ans.end(),curr) == ans.end())
                ans.push_back(curr);
            return;
        }

        if(sum < target)
        {
            for(int candidate: candidates){
                if(sum+candidate <= target){
                    curr.push_back(candidate);
                    rfunc(candidates,target,curr,sum+candidate);
                    curr.pop_back();
                }
            }
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        rfunc(candidates,target,curr,0);

        return ans;
    }
};