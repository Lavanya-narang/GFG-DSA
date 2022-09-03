oid rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0,pindx=0,nidx=0;
	    while(pindx<pos.size() && nidx<neg.size())
	    {
	        arr[i++]=pos[pindx++];
	        arr[i++]=neg[nidx++];
	    }
	    while(pindx<pos.size())
	    {
	        arr[i++]=pos[pindx++];
	    }
	    while(nidx<neg.size())
	    {
	        arr[i++]=neg[nidx++];
	    }
	}
