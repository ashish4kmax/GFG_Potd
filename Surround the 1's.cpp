// O(n*m) time complexity
class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int res = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                // check all 8 directions
                int count=0;
                if(matrix[i][j]==1) {
                    // top and bottom
                    if(i-1>=0 && matrix[i-1][j]==0) {
                    count++;
                    
                    }
                    if(i+1<n && matrix[i+1][j]==0) {
                        count++;
                    }
                
                    //left and right
                    if(j-1>=0 && matrix[i][j-1]==0) {
                        count++;
                    }
                    if(j+1<m && matrix[i][j+1]==0) {
                        count++;
                    }
            
                    //top-left and top-right
                    if((i-1>=0 && j-1>=0) && matrix[i-1][j-1]==0) {
                        count++;
                    }
                    if((i-1>=0 && j+1<m) && matrix[i-1][j+1]==0) {
                        count++;
                    }
            
                    //bottom-left and bottom-right
                    if((i+1<n && j-1>=0) && matrix[i+1][j-1]==0) {
                        count++;
                    }
                    if((i+1<n && j+1<m) && matrix[i+1][j+1]==0) {
                        count++;
                    }
                }
                
                if(count>0 && count%2==0) {
                    res++;
                }
            }
            
        }
        
        return res;
    }
};
