class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n=S.length();
        stack <char>st;
        int low=0,high=0;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='.')
            {
                reverse(S.begin()+low,S.begin()+high+1);
                low=high=i+1;
            }
            else
            {
                high=i;
            }
        }
        reverse(S.begin()+low,S.begin()+high+1);
        reverse(S.begin(),S.end());
        return S;
    } 
};
