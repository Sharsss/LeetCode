class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size(),dom=0;
        if(n==1) return 1;
        if(nums[0]>=nums[1]) dom++;
        if(nums[n-1]>=nums[n-2]) dom++;
        float avg=0.0;
        for(int i=1;i<n-1;i++){
            avg=(nums[i-1]+nums[i+1])/2.0;
            if(nums[i]>=avg) dom++;
              }
        return dom;
    }
};