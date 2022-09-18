bool isLucky(int n) {
        // code here
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
            if(i>n)
            {
                return true;
            }
            n-=n/i;
        }
        return true;
    }
