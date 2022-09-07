int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *ans=new int[2];
            if(arr[n-1]!=n)
            {
                ans[1]=n;
            }
            else
            {
                ans[1]=1;
            }
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<1)
            {
                ans[0]=arr[i];
            }
        
        if(arr[i]-arr[i-1]>1)
        {
            ans[1]=arr[i]-1;
        }
    }
        return ans;
    }
