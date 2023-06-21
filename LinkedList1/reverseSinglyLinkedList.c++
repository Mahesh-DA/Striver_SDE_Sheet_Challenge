#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head || !(head->next))
        return head;
    // Write your code here
    LinkedListNode<int> *temp=head,*pre=NULL;
    while(temp)
    {   head=head->next;
        temp->next=pre;
        pre=temp;
        temp=head;
    }
    return pre;
}
