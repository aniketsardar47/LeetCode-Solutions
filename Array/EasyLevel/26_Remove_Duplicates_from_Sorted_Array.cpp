class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[k] != nums[i]){
                k = k + 1;
                nums[k] = nums[i];
            }
        }
        return (k + 1);
    }
};