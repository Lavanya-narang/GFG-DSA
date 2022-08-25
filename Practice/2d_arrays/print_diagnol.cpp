	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int>ans;
		for(int i=0;i<n;i++)
		{
		    int row=0;
		    int col=i;
		    while(row<n && col>=0)
		    {
		        ans.push_back(A[row][col]);
		        row++;
		        col--;
		    }
		}
		for(int j=1;j<n;j++)
		{
		    int row=j;
		    int col=n-1;
		    while(row<n && col>=0)
		    {
		        ans.push_back(A[row][col]);
		        row++;
		        col--;
		    }
		}
		return ans;
	}
