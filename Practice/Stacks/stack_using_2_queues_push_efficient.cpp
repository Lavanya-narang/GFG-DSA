void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
        if(q1.size()==0)
        {
            return -1;
        }
        while(q1.size()>1)
        {
            int val=q1.front();
            q1.pop();
            q2.push(val);
        }
        int v1=q1.front();
        q1.pop();
        while(q2.size()>0)
        {
            int val=q2.front();
            q2.pop();
            q1.push(val);
        }
        return v1;
}
