class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>v;
        for(auto i:nums){
            if(i%2==0)v.push_back(i);
        }
        if(v.size()==0)return -1;
        map<int,int>m;
        for(auto i:v)m[i]++;
        int x=0;
        int a=0;
        for(auto i:m){
            
            cout<<a<<endl;
           if(i.second>a){
               x=i.first;
               a=i.second;
               
           }
        }
        return x;
    }
};