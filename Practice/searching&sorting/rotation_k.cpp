int findKRotation(int arr[], int n) {
	    // code here
	    int left=0,right=n-1;
	    while(left<right)
	    {
	        int mid=left+(right-left)/2;
	        if((arr[mid-1]>arr[mid]) && mid>0)
	        {
	            return mid;
	        }
	        if(arr[mid]<arr[right])
	        {
	            right=mid-1;
	        }
	        else
	        {
	            left=mid+1;
	        }
	    }
	    return left;
	}
