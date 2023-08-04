class Solution{
public:
    void Reverse(stack<int> &St){
        vector<int>stack;
        while(St.size()!=0) {
            stack.push_back(St.top());
            St.pop();
        }
        
        
        for(int i=0;i<stack.size();i++) {
            St.push(stack[i]);
        }
    }
};
