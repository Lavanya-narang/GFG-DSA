class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool handleclosing(stack<char>&st,char ch)
    {
        if(st.size()==0 || st.top()!=ch)
        {
            return false;
        }
        else
        {
            st.pop();
            return true;
        }
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        for(int i=0;i<x.length();i++)
        {
            char ch=x[i];
            if(ch=='{' || ch=='(' || ch=='[')
            {
                st.push(ch);
            }
             else   if(ch=='}')
                {
                    if(handleclosing(st,'{')==false)
                    {
                        return false;
                    }
                }
                else if(ch==']')
                {
                    if(handleclosing(st,'[')==false)
                    {
                        return false;
                    }
                }
                else if(ch==')')
                {
                    if(handleclosing(st,'(')==false)
                    {
                        return false;
                    }
                }
            
        }
        if(st.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
