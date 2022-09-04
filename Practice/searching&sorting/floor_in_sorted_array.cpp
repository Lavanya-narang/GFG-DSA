int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]==x)
            {
                ans=mid;
                return mid;
            }
            else if(v[mid]<x)
            {
                low=mid+1;
                ans=low;
            }
            else
            {
                high=mid-1;
                ans=low;
            }
        }
        if(ans==0 && v[0]!=x)
        {
            return -1;
        }
        if(ans>=n)
        {
            return n-1;
        }
        return ans;
    }
