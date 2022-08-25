vector<int> matrixDiagonally(vector<vector<int>>&matrix)
    {
         //Your code here
         //vector<int>matrix(mat);
         int n=matrix.size();
         int m=matrix[0].size();
         bool up=true;
         vector<int> ans(n*m);
         int row=0,col=0;
         int i=0;
         //if(n==0 || m==0)
         //{
           //  return new int[0];
         //}
         while(row<n && col<m)
         {
             if(up)
             {
                 while(row>0 && col<m-1)
                 {
                     ans[i++]=matrix[row][col];
                     row--;
                     col++;
                 }
                 ans[i++]=matrix[row][col];
                 if(col==m-1)
                 {
                     row++;
                 }
                 else
                 {
                     col++;
                 }
             }
             else
             {
                 while(row<n-1 && col>0)
                 {
                     ans[i++]=matrix[row][col];
                     row++;
                     col--;
                 }
                 ans[i++]=matrix[row][col];
                 if(row==n-1)
                 {
                    col++;
                 }
                 else
                 {
                    row++;
                 }
            }
            up=!up;
         }
        return ans;
    }
