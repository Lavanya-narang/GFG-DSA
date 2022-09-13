int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int i=0,j=N-1;
        int ans=0;
        while(i<=j)
        {
            if(A[i]<=A[j])
            {
                ans=max(ans,j-i);
                j=N-1;
                i++;
            }
            else
            {
                j--;
            }
        }
        if(ans>=0)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
