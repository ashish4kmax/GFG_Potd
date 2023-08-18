class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>res;
        res.push_back(a[n-1]);
        
        int ans = a[n-1];
        for(int i=n-2;i>=0;i--) {
            if(a[i]>=ans) {
                ans = a[i];
                res.push_back(a[i]);
            }
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};
