void permute(string str, int i,int j,vector<string>& s)
	{
		if (i == j-1)
		{
		    s.push_back(str);
			return;
		}
		else
		{
			for (int k= i; k <= j-1; k++)
			{
				swap(str[i], str[k]);        // STL `swap()` used
 
                // recur for substring `str[i+1, n-1]`
                permute(str, i + 1, j,s);
 
                // backtrack (restore the string to its original state)
                swap(str[i], str[k]);
			}
		}
	}
	
    vector<string> permutation(string S)
    {
        vector<string>res;
        permute(S,0,S.length(),res);
        
        sort(res.begin(),res.end());
        return res;
    }
