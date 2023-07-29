/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST

void inorder(struct Node *root, vector<float>& res) {
    if(root!=NULL) {
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
}

float findMedian(struct Node *root) {

      //Code here
    vector<float>res;
    inorder(root, res);
    
    
    float ans;
    int n = res.size();
    if(n%2!=0) {
        ans = res[n/2];
    }
    else {
        ans = (res[(n/2)-1]+res[n/2])/2;
    }
    
    return ans;
}
