void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=1;i<=n-1;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(arr[j+1]<arr[j])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
