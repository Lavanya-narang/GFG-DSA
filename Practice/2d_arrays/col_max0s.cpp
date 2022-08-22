    int columnWithMaxZeros(vector<vector<int>>arr,int N)
    {
        
        // Your code here
        vector<int>ans;
        int zctr;int x=0;
        for(int i=0;i<N;i++)
        {
            zctr=0;
            for(int j=0;j<N;j++)
            {
                if(arr[j][i]==0)
                {
                    zctr++;
                }
            }
            ans.push_back(zctr);
        }
        for(int i=0;i<N;i++)
        {
            x=max(x,ans[i]);
        }
        if(x==0)
        {
            return -1;
        }
        for(int i=0;i<N;i++)
        {
            if(x==ans[i])
            {
                return i;
            }
        }
    }
