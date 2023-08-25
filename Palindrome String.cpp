//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    for(int i=0,j=S.size()-1;i<=j;i++,j--) {
	        if(S[i]!=S[j]) return 0;
	    }
	    return 1;
	}

};
