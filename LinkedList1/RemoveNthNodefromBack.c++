/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* f=head,*s=head;
    while(K--)
    {
        f=f->next;
    }
    if(!f) return head->next;
    while(f->next)
    {
        s=s->next;
        f=f->next;
    }
    s->next=s->next->next;
    return head;
}
