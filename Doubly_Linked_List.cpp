//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Doubly Linked List in C++ using VS CODE//

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

int main()
{
    Node *head=NULL,*temp,*newNode;

    int n,value;

    cout<<"Enter Number of Nodes : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        newNode=new Node();

        cout<<"Enter Data : ";
        cin>>value;

        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;

        if(head==NULL)
        {
            head=newNode;
            temp=head;
        }
        else
        {
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
    }

    cout<<"\nDoubly Linked List\n";

    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }

    cout<<"NULL";

    return 0;
}