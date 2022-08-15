string lcprefix(string& str1,string& str2)
    {
        string result="";
        int length=min(str1.length(),str2.length());
        for(int i=0;i<length;i++)
        {
            if(str1[i]==str2[i])
            {
                result=result+str1[i];
            }
            else
            {
                break;
            }
        }
        if(result.length()==0)
        {
            return "-1";
        }
        return result;

    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        string prefix=arr[0];
        for(int i=1;i<N;i++)
        {
            prefix=lcprefix(prefix,arr[i]);
        }
        return prefix;
    }
