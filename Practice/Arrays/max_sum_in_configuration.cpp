int max_sum(int A[],int N)
{
//Your code here
    int msum=0,sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=A[i];
    }
    int csum=0;
    for(int i=0;i<N;i++)
    {
        csum+=A[i]*i;
    }
    msum=csum;
    for(int i=N-1;i>0;i--)
    {
        csum+=sum-A[i]*N;
        msum=max(msum,csum);
    }
    return msum;
}
