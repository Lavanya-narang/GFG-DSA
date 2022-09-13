 void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int min=0,max=n-1;
    	long long a[n];
    	for(int i=0;i<n;i++)
    	{
    	    a[i]=arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i]=a[max--];
    	    }
    	    else
    	    {
    	        arr[i]=a[min++];
    	    }
    	}
    }
