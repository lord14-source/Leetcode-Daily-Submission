class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sol;
        unordered_map<int,int>mp;
        int ct=0;

      for(int i=0;i<nums.size();i++){
         if(mp.find(target-nums[i])!=mp.end()){
             sol.push_back(i);
             sol.push_back(mp[target-nums[i]]); ct++;
             // return sol;
            
             
         }
          else{
              mp[nums[i]]=i;
          }
      }
            
        cout<<ct<<endl;

        
        return sol;
        
        
    }
};