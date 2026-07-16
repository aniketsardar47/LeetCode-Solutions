class Solution {
    public int getLeastFrequentDigit(int n) {
        int nums[] = new int[10];
        
        while(n > 0){
            int temp = n%10;
            nums[temp]++;
            n/=10;
        }

        int ans = -1;
        int smallest = Integer.MAX_VALUE;

        for(int i=0;i<10;i++){
            if(nums[i] != 0 && nums[i] < smallest){
                ans = i;
                smallest = nums[i];
            }
        }

        return ans;
        
    }
}