class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long res = a[n-1]-a[n-m];
        long long i=1;

        while((n-m-i)!=-1) {
            res = min(res, (a[n-1-i]-a[n-m-i]));
            i++;
        }
        
        return res;
    }   
};
