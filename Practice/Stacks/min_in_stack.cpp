int mi;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty())
	{
	    mi=a;
	    s.push(a);
	}
	else
	{
	    if(a<mi)
	    {
	        mi=a;
	    }
	    s.push(a);
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty())
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	int val=s.top();
	s.pop();
	return val;
}

int getMin(stack<int>& s){
	// Your code goes here
	return mi;
}
