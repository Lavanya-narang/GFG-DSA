    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int>st;
        int mid;
        int temp;
        mid=ceil((sizeOfStack+1)/2);
        for(int i=sizeOfStack;i>=1;i--)
        {
            if(i==mid)
            {
                s.pop();
            }
            else
            {
                temp=s.top();
                s.pop();
                st.push(temp);
            }
        }
        for(int i=sizeOfStack-1;i>=1;i--)
        {
            temp=st.top();
            s.push(temp);
            st.pop();
        }
    }
