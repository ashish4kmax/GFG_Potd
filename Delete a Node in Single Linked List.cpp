

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* insertbeg(Node *head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    return newnode;
}

Node* deleteNode(Node *head,int x)
{
    //Your code here
    int c = 1;
    Node *ans = NULL;
    
    while(head!=NULL) {
        if(c!=x) ans = insertbeg(ans, head->data);
        head = head->next;
        c++;
    }

    head = NULL;
    
    while(ans!=NULL) {
        head = insertbeg(head, ans->data);
        ans = ans->next;
    }
    

    return head;
}
