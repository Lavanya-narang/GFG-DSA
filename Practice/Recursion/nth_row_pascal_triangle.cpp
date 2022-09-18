 vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll>ans(n);
        long long arr[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                arr[i][j]=0;
            }
        }
        arr[1][1]=1;
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<i+1;j++)
            {
                arr[i][j]=(arr[i-1][j-1]+arr[i-1][j])%1000000007;
            }
        }
        for(int i=1;i<=n;i++)
        {
            ans.push_back(arr[n][i]);
        }
        return ans;
    }
