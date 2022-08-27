long long sumMatrix(long long n, long long q) {
        // code here
        if(q>(2*n))
        {
            return 0;
        }
        long long a=n+1;
        if(q>n)
        {
            return n-(q-a);
        }
        else if(q==a)
        {
            return n;
        }
        else
        {
            return n-(a-q);
        }
    }
