int transitionPoint(int arr[], int n) {
    // code here
    int i=0;
    while(i<n)
    {
        if(n>2 && arr[i]==0)
        {
            i++;
        }
        else if(arr[i]==1)
        {
            
            return i;
        }
        else
        {
            return -1;
        }
    }
