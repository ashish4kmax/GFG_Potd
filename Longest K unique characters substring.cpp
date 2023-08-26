//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        unordered_map<char,int>m;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            m[s[i]]++;
        }
        
        if(m.size()>=k) {
            int res = -1;
            m.clear();
            int i=0,j=0;
            while(j<n){
                m[s[j]]++;
                while(m.size()>k){
                    m[s[i]]--;
                    if(m[s[i]]==0) m.erase(s[i]);
                    i++;
                }
                if(m.size()==k) res=max(res,j-i+1);
                j++;
            }
            return res;
        }
        else {
            return -1;
        }
    }
};
