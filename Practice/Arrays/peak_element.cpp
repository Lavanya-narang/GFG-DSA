int peakElement(int arr[], int n)
    {
       // Your code here
            if(n==1)
            {
                return 0;
            }
       for(int i=0;i<n;i++)
       {

           if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
           {
               return i;
           }
       }
    }
