#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int Max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int maxSubArray(vector<int>& nums){
    if(nums.size() ==0)
        return 0;

    int max = nums[0];
    int maxEnd = nums[0];
    for(int i = 1; i < nums.size(); i++){
        maxEnd = Max(maxEnd +nums[i], nums[i]);
        max = Max(max, maxEnd);
        cout << i <<" "<<maxEnd<<" "<<max<<endl;
    }

    return max;
}

int main(){
    vector<int> n = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(n);
    cout << result;
    return 0;
}