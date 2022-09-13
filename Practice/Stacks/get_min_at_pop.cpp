stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>st;
   int m=arr[0];
   st.push(m);
   for(int i=1;i<n;i++)
   {
       m=min(m,arr[i]);
       st.push(m);
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
