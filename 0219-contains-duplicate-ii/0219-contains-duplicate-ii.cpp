class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        map<int,int>m;
        for(auto  i:nums)m[i]++;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>1){
                v.push_back({nums[i],i});
            }
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        for(int i=1;i<v.size();i++){
            if((v[i].first==v[i-1].first)&&abs(v[i].second-v[i-1].second)<=k)return 1;
        }
               return 0;
    }
};