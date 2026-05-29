class Solution {
public:
    vector<int> ans;

    void rfunc(vector<int>& digits,vector<bool> &used, int i,int n,int num){
        if(i==3){
            if(num%2==0){
                ans.push_back(num);
            }
            return;
        }

        for(int k=0;k<digits.size();k++){
            if(used[k]) continue;
            if(i==0 && digits[k]==0) continue;
            if (k > 0 && digits[k] == digits[k - 1] && !used[k - 1]) continue;
            used[k] = true;
                rfunc(digits,used,i+1,n,(num*10)+digits[k]);
            used[k] = false;
        }
            

    }
    int totalNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(),false);
        sort(digits.begin(),digits.end());
        rfunc(digits,used,0,digits.size(),0);
        return ans.size();
    }
};