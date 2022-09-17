vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>st;
       st.push(0);
       vector<int>span(n,0);
       span[0]=1;
       for(int i=1;i<n;i++)
       {
           while(st.size()>0 && price[i]>=price[st.top()])
           {
               st.pop();
           }
           if(st.size()==0)
           {
               span[i]=i+1;
           }
           else
           {
               span[i]=i-st.top();
           }
           st.push(i);
       }
       return span;
    }
