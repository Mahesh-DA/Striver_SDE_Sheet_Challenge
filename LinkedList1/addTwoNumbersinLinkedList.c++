/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node *temp=NULL,*pre=num1;
    int x=0;
    if(!num1)return num2;
    if(!num2)return num1;
    while(num1 && num2)
    {
        x=num1->data+num2->data+x;
        num1->data=x%10;
        x/=10;
        temp=num1;
        num1=num1->next;
        num2=num2->next;
    }
    while(num1 && x)
    {
        x+=num1->data;
        num1->data=x%10;
        x/=10;
        temp=num1;
        num1=num1->next;
    }
    while(num2 && x)
    {
        x+=num2->data;
        num2->data=x%10;
        x/=10;
        temp->next=num2;
        num2=num2->next;
        temp=temp->next;
    }
    if(x)
    {
        Node * node;
        node->data=x;
        temp->next=node;
    }
    if(num2)
    {
        temp->next=num2;
    }
    return pre;
}
