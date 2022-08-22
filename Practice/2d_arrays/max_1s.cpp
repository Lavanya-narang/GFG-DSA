       int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int max=0,row=0;
            for(int i=0;i<N;i++)
            {
                int sum=0;
                for(int j=0;j<M;j++)
                {
                    sum+=Mat[i][j];
                }
                if(max<sum)
                {
                    max=sum;
                    row=i;
                }
                if(sum==M)
                {
                    return i;
                }
            }
            return row;
        }
