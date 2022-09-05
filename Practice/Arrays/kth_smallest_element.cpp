int partition(int arr[],int l,int r)
    {
        int pivot=arr[r];
        int i=l-1;
        for(int j=l;j<r;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[r]);
        return i+1;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        while(l<=r)
        {
            int pi=partition(arr,l,r);
            if(pi==k-1)
            {
                return arr[pi];
            }
            else if(pi>k-1)
            {
                r=pi-1;
            }
            else
            {
                l=pi+1;
            }
        }
        return -1;
    }
