/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


vector<vector<int>> printLevel(Node *root){
    vector<vector<int>>res;
    if(root==NULL)return res;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        vector<int>temp;
        for(int i=0;i<count;i++) {
            Node *curr=q.front();
            q.pop();
            temp.push_back(curr->data);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        res.push_back(temp);
    }
    
    return res;
} 

//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<vector<int>>ans;
    ans = printLevel(root);
    
    int m = ans.size();
    
    vector<int>res;
    for(int i=0;i<m;i++) {
        if(i%2!=0) {
            for(int j=0;j<ans[i].size();j++) {
                res.push_back(ans[i][j]);
            }
        }
        else {
            for(int j=ans[i].size()-1;j>-1;j--) {
                res.push_back(ans[i][j]);
            }
        }
    }
    
    return res;
}
