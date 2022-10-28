class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,bool>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=1;
        }
        int ct=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]-diff]&&m[nums[i]+diff])ct++;
        }
        return ct;
    }
};