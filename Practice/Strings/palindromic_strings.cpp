class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0,j=S.length()-1;
	    while(i<=j)
	    {
	        if(S[i]==S[j])
	        {
	            i++;
	            j--;
	        }
	        else if(S[i]!=S[j])
	        {
	            return 0;
	        }
	    }
	    return 1;
	}

};
