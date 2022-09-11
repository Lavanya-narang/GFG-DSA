	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0,j=m-1,index=-1;
	    while(i<n && j>=0)
	    {
	        if(arr[i][j]==1)
	        {
	            index=i;
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    return index;
	}
