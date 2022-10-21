//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
         vector<int> ans;

        int rowStart=0,rowEnd=R-1,colStart=0,colEnd=C-1;

        while(rowStart<=rowEnd && colStart<=colEnd){

            for(int i=colStart; i<=colEnd; i++){

                ans.push_back(a[rowStart][i]);

            }

            rowStart++;

            for(int i=rowStart; i<=rowEnd; i++){

                ans.push_back(a[i][colEnd]);

            }

            colEnd--;

            if(rowStart<=rowEnd){

                for(int i=colEnd; i>=colStart; i--){

                    ans.push_back(a[rowEnd][i]);

                }

                rowEnd--;

            }

            if(colStart<=colEnd){

                for(int i=rowEnd; i>=rowStart; i--){

                    ans.push_back(a[i][colStart]);

                }

                colStart++;

            }

        }

        reverse(ans.begin(),ans.end());

        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends