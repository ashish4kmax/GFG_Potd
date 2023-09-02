class Solution
{
public:
    int getCount(Node *root, int k) {
        //code here
        queue<Node*>q;
        q.push(root);
        int level=0;
        int ans=0;
        while(!q.empty()) {
            int size = q.size();
            level++;
            while(size) {
                Node* front = q.front();
                q.pop();
                size--;
                if(front->left==NULL && front->right==NULL && k>=level) {
                    k=k-level;
                    ans++;
                }
                if(front->left) {
                    q.push(front->left);
                    
                }
                if(front->right) {
                    q.push(front->right);
                }
            }
        }
        
        return ans;
    }
};
