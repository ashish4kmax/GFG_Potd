class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int maxval = INT_MIN;
        for(int i=0;i<n;i++) {
            int rows=0,columns=0;
            for(int j=0;j<n;j++) {
                rows+=matrix[i][j];
            }
            
            maxval = max(maxval,rows);
            
            for(int j=0;j<n;j++) {
                columns+=matrix[j][i];
            }
            
            maxval = max(maxval,columns);
        }
        
        int res = 0;
        
        for(int i=0;i<n;i++) {
            int sum = 0;
            for(int j=0;j<n;j++) {
                sum+=matrix[i][j];
            }
            
            res+=(maxval-sum);
        }
        
        return res;
    } 
};
