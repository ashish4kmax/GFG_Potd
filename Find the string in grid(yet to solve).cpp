class Solution {
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    vector<vector<int>>res;
	    
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<m;j++) {
	            vector<int>t;
	            string temp="";
	            int l = j;
	            int o = i;
	            // left-1
	            for(int k=0;k<word.length() && l>=0;k++,l--) {
	                if(temp==word) {
	                    t.push_back(i);
	                    t.push_back(l);
	                    res.push_back(t);
	                    t.clear();
	                }
	                temp+=grid[i][l];
	            }
	            if(temp==word) {
	                t.push_back(i);
	                t.push_back(j);
	                res.push_back(t);
	                t.clear();
	            }
	            
	            temp="";
	            l=j;
	            // right-2
	            for(int k=0;k<word.length() && l<m;k++,l++) {
	                if(temp==word) {
	                    t.push_back(i);
	                    t.push_back(l);
	                    res.push_back(t);
	                    t.clear();
	                }
	                temp+=grid[i][l];
	            }
	            if(temp==word) {
	                t.push_back(i);
	                t.push_back(j);
	                res.push_back(t);
	                t.clear();
	            }
	            
	            
	            l=i;
	            temp="";
	            //top-3
	            for(int k=0;k<word.length() && l>=0;k++,l--) {
	                if(temp==word) {
	                    t.push_back(i);
	                    t.push_back(j);
	                    res.push_back(t);
	                    t.clear();
	                }
	                temp+=grid[l][j];
	            }
	            if(temp==word) {
	                t.push_back(i);
	                t.push_back(j);
	                res.push_back(t);
	                t.clear();
	            }
	            
	            l=i;
	            temp="";
	            //bottom-4
	            for(int k=0;k<word.length() && l<n;k++,l++) {
	                if(temp==word) {
	                    t.push_back(i);
	                    t.push_back(j);
	                    res.push_back(t);
	                    t.clear();
	                }
	                temp+=grid[l][j];
	            }
	            if(temp==word) {
	                t.push_back(i);
	                t.push_back(j);
	                res.push_back(t);
	                t.clear();
	            }
	        }
	    }
	    
	    return res;
	}
};
