/****************************************************************

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

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* first=firstHead,*second=secondHead;
    while(first!=second)
    {   
        first=first->next?first->next:secondHead;
        second=second->next?second->next:firstHead;
    }
    return first;
    // unordered_map<Node*,bool> m;
    // while(firstHead && secondHead)
    // {
    //     if(m[firstHead])
    //         return firstHead;
    //     m[firstHead]=1;
    //     if(m[secondHead])
    //         return secondHead;
    //     m[secondHead]=1;
    //     firstHead=firstHead->next;
    //     secondHead=secondHead->next;
    // }
    // while(firstHead)
    // {
    //     if(m[firstHead])
    //         return firstHead;
    //     m[firstHead]=1;
    //     firstHead=firstHead->next;
    // }
    // while(secondHead)
    // {
    //     if(m[secondHead])
    //         return secondHead;
    //     m[secondHead]=1;
    //     secondHead=secondHead->next;
    // }
    // return NULL;
    // O(max(m,n)) time + O(m+n) space


}
