vector<int> duplicates(int arr[], int n) 
    {
        // code here
        vector<int>duplicate;
        int prev=-1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1] && prev!=arr[i])
            {
                prev=arr[i];
                duplicate.push_back(arr[i]);
            }
        }
        if(duplicate.size()>0)
       {
           return duplicate;
       }
        else
        {
            duplicate.push_back(-1);
            return duplicate; 
        }
    }
