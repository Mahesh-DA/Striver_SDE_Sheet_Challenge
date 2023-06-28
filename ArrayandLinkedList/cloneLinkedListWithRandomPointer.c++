#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    if(!head) return head;
    LinkedListNode<int> *temp=head,*ans,*t;
    while(temp)
    {   
        LinkedListNode<int> *a=new LinkedListNode<int> (temp->data);
        t=temp->next;
        temp->next=a;
        a->next=t;
        temp=t;
    }
    temp=head;
    while(temp)
    {   
        if(temp->random)
            temp->next->random=temp->random->next;
        temp=temp->next->next;
    }
    temp=head,ans=head->next,t=head->next;
    while(temp)
    {
        temp->next=temp->next->next;
        t->next=t->next?t->next->next:NULL;
        temp=temp->next;
        t=t->next;
    }
    return ans;
}
