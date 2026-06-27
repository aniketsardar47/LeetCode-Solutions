class Solution {
public:
    vector<int> solve(int n){
        if(n == 1){
            return {0,1};
        }

        vector<int> ans;
        vector<int> temp = solve(n-1);
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i]);
        } 

        int mask = 1 << (n - 1);
        for(int i = temp.size()-1;i>=0;i--){
            ans.push_back(temp[i] | mask);
        }

        return ans;
    }
    vector<int> grayCode(int n) {
        if(n == 0) return {0};
        return solve(n);
    }
};