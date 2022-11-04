class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
       for(int i=0;i<s.size();i++){
           if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
               v.push_back(s[i]);
           }
       }
        reverse(v.begin(),v.end());
        string res="";  
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
               res+=v[k];
                k++;
           }
            else{
                res+=s[i];
            }
            
            
            
        }
        return res;
        
    }
};