/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(!head || !head->next) return head;
	Node* l1=head,*l2=head->next,*ans=head,*nxt=head;
	while(nxt->next)
	{	l1=head;
		l2=nxt->next;
		if(l1->data<=l2->data)
		{	ans=l1;
			l1=l1->child;
		}
		else
		{	ans=l2;
			l2=l2->child;
		}
		head=ans;
		while(l1 && l2)
		{	
			if(l1->data<=l2->data)
			{	ans->child=l1;
				l1=l1->child;
			}
			else
			{	ans->child=l2;
				l2=l2->child;
			}
			ans=ans->child;
		}
		ans->child=l1?l1:l2;
		l1=nxt->next;
		nxt->next=NULL;
		nxt=l1;
	}
	return head;
}
