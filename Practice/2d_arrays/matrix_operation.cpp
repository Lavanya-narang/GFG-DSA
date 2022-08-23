    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        int i=0,j=0;//,count=0;
        int n=matrix.size();
        int m=matrix[0].size();
        //int total=n*m;
        int dir=0;
        
        while(true)
        {
           
            dir=(dir+matrix[i][j])%4;
             if(matrix[i][j]==1)
            {
                matrix[i][j]=0;
            }
            if(dir==0)
            {
                j++;

            }
            else if(dir==1)
            {
                i++;
            }
            else if(dir==2)
            {
                j--;
                
            }
            else if(dir==3)
            {
                i--;
               
            }
            
            if(j==m)
            {
                j--;
                break;
            }
            if(i==n)
            {
                i--;
                break;
            }
            if(j==-1)
            {
                j++;
                break;
            }  
            if(i==-1)
            {
                i++;
                break;
            }
        }
        pair<int,int>res{i,j};
        return res;
    }
