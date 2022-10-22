//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    const int MOD = 1e8;
    public:
    int fillingBucket(int n) {
        // code here
        int prev = 0;
        int curr = 0;
        int next = 1;
        
        while(n-->0){
            curr = next;
            next += prev;
            next %= MOD;
            prev = curr;
        }
        return next;}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends