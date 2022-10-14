//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends

class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        unordered_map<int,int>m;

        for(int i=0;i<n;i++)

        {

            m[a[i]]++;

        }

        

        queue<int>q;

        for(int i=n-1;i>=0;i--)

        {

            if(m[a[i]]>0)

            {

                if(m[a[i]-1]>=1)

                {

                    // cout<<a[i]<<" ";

                    q.push(a[i]);

                    m[a[i]]--;

                    m[a[i]-1]--;

                }

            }

        }

        

        int s=0;

        while(!q.empty())

        {

            s+=q.front();

            q.pop();

        }

        

        for(auto i:m)

        {

            while(i.second--)

            {

                s+=i.first;

            }

        }

        

        return s;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends