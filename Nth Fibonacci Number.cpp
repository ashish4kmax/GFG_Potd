class Solution {
  public:
    #define 1000000007
    int nthFibonacci(n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int a=1,b=1,c;
        for(int i=2;i<n;i++) {
            c=(a+b)%const;
            a=b;
            b=c;
        }  
        return c;
    }
};
