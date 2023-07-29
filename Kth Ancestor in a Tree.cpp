//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
Node* start;
int target;
map<Node*,Node*>par;
void traverse(Node* cur){
    if(!cur)return;
    if(cur->data == target){
        start = cur;
    }
    if(cur->left){
        par[cur->left] = cur;
        traverse(cur->left);
    }
    if(cur->right){
        par[cur->right] = cur;
        traverse(cur->right);
    }
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    target = node;
    traverse(root);
    par[root] = NULL;
    Node* ans = start;
    while(k-- and ans!=NULL){
        ans = par[ans];
    }
    if(ans){
        return ans->data;
    }
    else{
        return -1;
    }
}
