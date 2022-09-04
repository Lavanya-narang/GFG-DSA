   vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
        vector<int>ans;
        sort(arr2,arr2+n);
        for(int i=0;i<m;i++)
        {
            int left=0,right=n-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(arr2[mid]<=arr1[i])
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            ans.push_back(left);
        }
        return ans;
    }
