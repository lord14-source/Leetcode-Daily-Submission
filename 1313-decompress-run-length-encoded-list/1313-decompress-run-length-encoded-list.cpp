class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                while(nums[i]){
                    v.push_back(nums[i+1]);
                    nums[i]--;
                }
            }
        }
        return v;
    }
};