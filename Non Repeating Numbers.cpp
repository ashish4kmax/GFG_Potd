class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>res;
        
        int n = nums.size();
        int max = nums[0];
        
        for(int i=0;i<n;i++) {
            if(nums[i]>max) max = nums[i];
        }
        
        
        vector<int>map;
        map.resize(max+1);
        
        for(int i=0;i<n;i++) {
            map[nums[i]]++;
        }
        
        for(int i=1;i<(max+1);i++) {
            //cout<<i<<" "<<map[i]<<endl;
            if(map[i]==1) res.push_back(i);
        }
        
        return res;
    }
};
