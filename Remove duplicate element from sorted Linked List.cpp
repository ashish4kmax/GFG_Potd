/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *insertbeg(Node* head, int value) {
    Node* newnode = new Node(value);
    newnode->next = head;
    return newnode;
}

Node *removeDuplicates(Node *head) {
    // your code goes here
    
    Node* ans = new Node(head->data);
    Node* res = NULL;
    
    
    while(head!=NULL) {
        int prev = head->data;
        head = head->next;
        if(head==NULL) {
            break;
        }
        int current = head->data;
        
        if(prev!=current) {
            ans = insertbeg(ans, current);
        }
    }
    
    while(ans!=NULL) {
        res = insertbeg(res, ans->data);
        ans = ans->next;
    }
    
    return res;
}
