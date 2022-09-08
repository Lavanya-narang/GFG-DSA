 int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int check=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                if(arr[i]==check)
                {
                    check++;
                }
            }
        }
        return check;
    } 
