class Solution{
public:     
    long long int largestPrimeFactor(int n){
        vector<long long int>res;
        if(n <= 1)
		    res.push_back(1);

	    while(n % 2 == 0) {
	        res.push_back(2);
            n = n / 2;
	    }

	    while(n % 3 == 0) {
		    res.push_back(3);
		    n = n / 3;
	    }

	    for(int i=5; i*i<=n; i=i+6) {
		    while(n % i == 0) {
			    res.push_back(i);
			    n = n / i;
		    }

    		while(n % (i + 2) == 0) {
	    		res.push_back(i+2);
		    	n = n / (i + 2);
		    }
	    }

	    if(n > 3)
		    res.push_back(n);
        
        long long max = res[0];
        for(int i=1;i<res.size();i++) {
            if(res[i]>max) max = res[i];
        }
        
        return max;
    }
};
