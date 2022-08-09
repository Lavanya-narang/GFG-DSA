void reverse(int arr[],int left,int right)
    {
        while(left<right)
        {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        // code here
        d%=n;
        if(d<0)
        {
            d+=n;
        }
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
