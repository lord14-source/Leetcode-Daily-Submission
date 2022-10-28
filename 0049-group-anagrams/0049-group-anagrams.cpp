class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>>v;
map<string ,vector<string>>m;
        for(auto i:s){
            string g=i;
            sort(g.begin(),g.end());
            m[g].push_back(i);
            
        }
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }
}; 