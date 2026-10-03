class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,res=0;
        while(i<nums.size()){
            res+=min(nums[i],nums[i+1]);
            i+=2;
        }
        return res;
    }
};