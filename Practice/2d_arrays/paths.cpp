vector<vector<int>>ans;
    void solve(vector<vector<int>>grid,int x,int y,vector<int>v)
    {
        if(x==grid.size()-1 && y==grid[0].size()-1)
        {
            v.push_back(grid[x][y]);
            ans.push_back(v);
            return;
        }
        if(x!=grid.size()-1)
        {
            v.push_back(grid[x][y]);
            solve(grid,x+1,y,v);
            v.pop_back();
        }
        if(y!=grid[0].size()-1)
        {
            v.push_back(grid[x][y]);
            solve(grid,x,y+1,v);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<int>v;
        solve(grid,0,0,v);
        return ans;
    }
