string removeDups(string S) 
	{
	    // Your code goes here
	    string ans="";
	    int arr[26]={0};
	    int n=S.length();
	    for(int i=0;i<n;i++)
	    {
	            arr[S[i]-'a']++;
	    }
	
	for(int i=0;i<n;i++)
	{
	    if(arr[S[i]-'a']>0)
	    {
	    ans+=S[i];
	    arr[S[i]-'a']=0;
	    }
	}
	return ans;
	}
