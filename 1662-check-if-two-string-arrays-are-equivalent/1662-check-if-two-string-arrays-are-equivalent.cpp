class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string a,b;
        for(auto x:w1)
            a += x;
        for(auto x:w2)
            b += x;
       
        if(a==b)
            return 1;
        
        return 0;
        
    }
};