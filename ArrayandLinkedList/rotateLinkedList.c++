/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int solve(Node*node,int k,int c,Node* *head)
{    
     if(node->next)
     {
          k=solve(node-> next,k,c+1,head);
          if(k<0)
               return -1;
     }
     else
     {          
          node->next=*head;
          k%=c;
     }
     if(k==1)
          *head=node;
     if(k==0)
          node->next=NULL;
     return k-1;
}
Node *rotate(Node *head, int k) {
     // Write your code here.
     if(!k || !head || !head->next)
          return head;
     solve(head,k,1,&head);
     return head;
}
