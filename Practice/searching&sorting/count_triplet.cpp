int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int low=0,high=n-1;
	        while(low<high)
	        {
	            if(low==arr[i])
	            {
	                low++;
	            }
	            if(high==arr[i])
	            {
	                high--;
	            }
	            if(arr[low]+arr[high]==arr[i])
	            {
	                count++;
	                low++;
	                high--;
	            }
	            else if(arr[low]+arr[high]<arr[i])
	            {
	                low++;
	            }
	            else
	            {
	                high--;
	            }
	        }
	    }
	    return count;
	}
