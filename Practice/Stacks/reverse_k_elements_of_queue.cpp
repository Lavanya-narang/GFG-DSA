queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>st;
    for(int i=0;i<k;i++)
    {
        int val=q.front();
        q.pop();
        st.push(val);
    }
    while(!st.empty())
    {
        int val=st.top();
        st.pop();
        q.push(val);
    }
    int remainsize=q.size()-k;
    while(remainsize--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
