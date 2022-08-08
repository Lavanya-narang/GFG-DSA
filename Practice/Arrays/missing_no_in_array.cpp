 int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int total=(n)*(n+1)/2;
        for(int i=0;i<n-1;i++)
        {
            total-=array[i];
        }
        return total;
    }
