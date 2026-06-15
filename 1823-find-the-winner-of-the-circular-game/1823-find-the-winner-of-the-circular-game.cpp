class Solution {
public:
    void deletele(vector<int> &nums,int to_delete){
        for(int i=to_delete+1;i<nums.size();i++)
            nums[i-1] = nums[i];
        nums.pop_back();
    }
    int rfunc(vector<int> &nums,int k,int index){
        if(nums.size() == 1){
            return nums[0];
        }
        int to_delete = (index+k) % nums.size();

        deletele(nums,to_delete);

        return rfunc(nums,k,to_delete);
    }
    int findTheWinner(int n, int k) {
        vector<int> nums(n,0);
        for(int i=1;i<=n;i++){
            nums[i-1] = i;
        }
        k--;
        return rfunc(nums,k,0);
    }
};