vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        stack<int>st;
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=st.top())
            {
                st.push(a[i]);
            }
        }
        while(!st.empty())
        {
            int ele=st.top();
            st.pop();
            v.push_back(ele);
        }
        return v;
    }
