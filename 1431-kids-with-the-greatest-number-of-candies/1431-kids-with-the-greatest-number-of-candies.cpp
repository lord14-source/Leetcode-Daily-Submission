class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool>v;
        int d= *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+e<d)v.push_back(0);
            else v.push_back(1);
        }
        return v;
        
    }
};