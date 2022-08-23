    void MakeZeros(vector<vector<int> >& matrix) 
    {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(matrix);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ans[i][j]==0)
                {
                    int val=0;
                    if((i-1)>=0)
                    {
                        val+=ans[i-1][j];
                        matrix[i-1][j]=0;
                    }
                    if((j-1)>=0)
                    {
                        val+=ans[i][j-1];
                        matrix[i][j-1]=0;
                    }
                    if((i+1)<n)
                    {
                        val+=ans[i+1][j];
                        matrix[i+1][j]=0;
                    }
                    if((j+1)<m)
                    {
                        val+=ans[i][j+1];
                        matrix[i][j+1]=0;
                    }
                    matrix[i][j]=val;
                }
            }
        }
    }
