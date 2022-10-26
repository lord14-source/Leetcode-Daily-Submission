class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)m[i]++;
        int x=0;
        for(auto i:m){
            if(i.second>nums.size()/2){x= i.first;break;}
        }
        return x;
    }
};