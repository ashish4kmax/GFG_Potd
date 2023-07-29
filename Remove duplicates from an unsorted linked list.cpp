// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
    
    if(head==nullptr && head->next==nullptr)
    {
        return head;
    }
    unordered_set<int>st;
    Node *curr=head;
    st.insert(curr->data);
    
    while(curr->next!=nullptr)
    {
        if(st.find(curr->next->data)!=st.end())
        {
            Node *dup=curr->next;
            curr->next=dup->next;
            delete dup;
        }
        else
        {
            st.insert(curr->next->data);
            curr=curr->next;
        }
    }
    return head;
}
