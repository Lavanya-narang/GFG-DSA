bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
     for(int i=0;i<size;i++)
     {
       int j=i+1;
       if(abs(arr[j]-arr[i])==n)
       {
           return true;
       }
   }
   if(n==0)
   {
       return false;
   }
    int i=0,j=1;
    while(i<size && j<size)
    {
        int diff=abs(arr[j]-arr[i]);
        if(diff==n)
        {
            
            return true;
        }
        else if(diff<n)
        {
            j++;
        }
        else if(diff>n)
        {
            i++;
        }
    
    }
    return false;
}
