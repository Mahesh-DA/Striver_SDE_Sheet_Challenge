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
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head || !head->next) return true;
    LinkedListNode<int> *st=head,*fast=head->next,*pre=NULL;
    while(fast && fast->next)
    {   
        fast=fast->next->next;
        st=st->next;
    }
    st=st->next;
    while(st)
    {   
        fast=st->next;
        st->next=pre;
        pre=st;
        st=fast;
    }
    while(pre && pre->data==head->data)
    {   
        pre=pre->next;
        head=head->next;        
    }
    return !pre;
}
