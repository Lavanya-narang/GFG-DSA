void swap(int *i,int *j)
    {
        int temp=*i;
        *i=*j;
        *j=temp;
    }
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i=0;i<n;i+=2)
        {
            if(i>0 && arr[i-1]>arr[i])
            {
                swap(&arr[i],&arr[i-1]);
            }
            if(i<n-1 && arr[i]<arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
    }
