class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int>m;
        for(auto i:s)m[i]++;
        if(m.size()==26)return 1;
        return 0;
        
    }
};