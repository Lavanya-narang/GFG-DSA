 int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int i=0,j=0,mnl=INT_MAX;
        int sum=0;
        while(j<n)
        {
            sum+=arr[j];
            while(sum>x)
            {
                mnl=min(mnl,j-i+1);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return mnl;
    }
