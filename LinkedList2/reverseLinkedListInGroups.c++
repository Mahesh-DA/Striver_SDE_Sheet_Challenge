#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	Node *cur,*temp=head,*pre,*st,*stt,*end;
	for(int i=0;i<n && temp;i++)
	{	if(!b[i])continue;
		pre=NULL;
		stt=temp;
		
		for(int j=0;j<b[i] && temp;j++)
		{

			cur=temp->next;
			temp->next=pre;
			pre=temp;
			temp=cur;
		}
		if(i==0)
			head=pre;
		else
			end->next=pre;
		end=stt;
		if(i==n-1 && temp)
		{
			end->next=temp;
		}
	}
	return head;
}
