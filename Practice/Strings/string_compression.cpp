string encode(string src)
{     
  //Your code here 
  string str="";
  str+=src[0];
  int count=1;
  for(int i=0;i<src.length()-1;i++)
  {
      if(src[i]==src[i+1])
      {
          
          count++;
      }
      else
      {
          str+=to_string(count);
          str+=src[i+1];
          count=1;
      }
  }
      str+=to_string(count);
      return str;
}
