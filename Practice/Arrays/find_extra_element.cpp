int findExtra(int a[], int b[], int n) {
        // add code here.
        int low=0,high=n-1,mid;
        while(low<high)
        {
            mid=(low+high)/2;
            if(a[mid]==b[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return high;
    }
