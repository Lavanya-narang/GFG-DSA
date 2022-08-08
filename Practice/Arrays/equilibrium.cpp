int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int lsum=0;
        int sum=0;
        if(n==1)
        {
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum-=a[i];
            if(lsum==sum)
            {
                return i+1;
            }
            else
            {
                lsum+=a[i];
            }        
        }
        return -1;
    }
