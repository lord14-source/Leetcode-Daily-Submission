class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int>v;
        for(auto i:m){
            if(i.second>nums.size()/3)v.push_back(i.first);
        }
        return v;
    }
};