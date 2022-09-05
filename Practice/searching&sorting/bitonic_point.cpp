	int findMaximum(int arr[], int n) {
	    // code here
	    int left=0,right=n-1;
	        while(left<=right)
	        {
	            int mid=(left+right)/2;
	            if(arr[mid]>arr[mid-1])
	            {
	                left=mid+1;
	            }
	            else
	            {
	                right=mid-1;
	            }
	        }
	    return arr[right];
	}
