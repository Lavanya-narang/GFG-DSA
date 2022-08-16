int findMaxLen(string s) {
        // code here
        stack<int>st;
        st.push(-1);
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
             st.push(i);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    count=max(count,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return count;
    }
