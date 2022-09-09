void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code   
        if(s1.size()==0)
        {
            return -1;
        }
        while(s1.size()>1)
        {
            int val=s1.top();
            s1.pop();
            s2.push(val);
        }
        int v1=s1.top();
        s1.pop();
        while(s2.size()>0)
        {
            int val=s2.top();
            s2.pop();
            s1.push(val);
        }
        return v1;
}
