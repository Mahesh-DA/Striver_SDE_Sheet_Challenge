#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int> *temp=NULL,*ans=NULL;
    if(!first)  return second;
    if(!second) return first;
    temp=first->data<=second->data?first:second;
    ans=temp;
    while(first && second)
    {
        if(first->data<=second->data)
        {
            Node<int>* t=first;
            first=first->next;
            temp->next=t;
        }
        else
        {   Node<int>* t=second;
            second=second->next;
            temp->next=t;
        }
        temp=temp->next;
    }
    if(first)
        temp->next=first;
    else if(second)
        temp->next=second;
    return ans;
}
