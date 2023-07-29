/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    Node* insertbeg(Node *head, int value) {
        Node* newnode = new Node(value);
        newnode->next = head;
        return newnode;
    }
    
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zeroes = 0;
        int ones = 0;
        int twos = 0;
        
        Node *curr = head;
        
        while(curr!=NULL) {
            if(curr->data==0) {
                zeroes++;
            }
            else if(curr->data==1) {
                ones++;
            }
            else {
                twos++;
            }
            curr = curr->next;
        }
        
        int z = 0;
        int one = 0;
        int two = 0;
        
        Node* res = NULL;
        
        while(two<twos) {
            res = insertbeg(res, 2);
            two++;
        }
        
        while(one<ones) {
            res = insertbeg(res, 1);
            one++;
        }
        
        while(z<zeroes) {
            res = insertbeg(res, 0);
            z++;
        }
        
        return res;
    }
};
