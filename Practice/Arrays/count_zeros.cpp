int countZeroes(int arr[], int n) {
        // code here
        if(arr[0]==0)
        {
            return n;
        }
        int count=0;
        int left=0,right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==1)
            {
                left=mid+1;
            }
            else if(arr[mid]==0)
            {
                right=mid-1;
                count=(n-mid);
            }
        }
        return count;
    }
