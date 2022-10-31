class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int a=m[0][0];
                  for(int i=1;i<m.size();i++){
                      for(int j=1;j<m[0].size();j++){
                           if (m[i][j] != m[i - 1][j - 1])return 0;
                      }
                  }
        return 1;
        
    }
};