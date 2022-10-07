class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {
        
           int a=0;
        int b=0;
        int c=0;
        map<char,int>n;
        for(int i=0;i<g.size();i++){
            map<char,int>m;
            for(auto j:g[i]){
                m[j]++;
                n[j]++;
            }
            for(auto k:m){
                if(k.first=='M')a=i;
                if(k.first=='P')b=i;
                if(k.first=='G')c=i;
                
            }
            
        }
        
         int sum=0;
         for(int i=0;i<a;i++){
             sum+=t[i];
             
             
         }
        for(int j=0;j<b;j++){
            cout<<t[j]<<endl;
            sum+=t[j];
        }
        for(int i=0;i<c;i++){
            sum+=t[i];
        }
       
       
        
        for(auto k:n){sum+=k.second;}
        
        return sum;
        
    }
};