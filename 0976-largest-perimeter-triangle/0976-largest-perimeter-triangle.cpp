class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int g=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]<nums[i-1]+nums[i-2]){
                g=nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return g;
        
    }
};