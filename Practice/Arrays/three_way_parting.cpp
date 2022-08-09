    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int n=array.size();
        int i=0;int end=n-1;int start=0;
        while(i<=end)
        {
            if(array[i]<a)
            {
                if(i==start)
                {
                    i++;
                    start++;
                }
                else
                {
                    swap(array[i],array[start]);
                    i++;
                    start++;
                }
            }
            else if(array[i]>b)
            {
                swap(array[i],array[end]);
                end--;
            }
            else
            {
                i++;
                
            }
        }
    }
