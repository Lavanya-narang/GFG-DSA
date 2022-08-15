
bool isRotated(string str1, string str2)
    {
        // Your code here
        string str=str1;
        rotate(str.begin(),str.begin()+str.length()-2,str.end());
        rotate(str1.begin(),str1.begin()+2,str1.end());
        return str1==str2 || str==str2; 
    }
