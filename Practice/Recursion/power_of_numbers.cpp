long long power(int N,int R)
    {
       //Your code here
       if(R==0)
       {
           return 1;
       }
        long half=power(N,R/2);
        long full=(half*half)%1000000007;
        if(R%2==0)
        {
            return full;
        }
        return full*N%1000000007;
    }
