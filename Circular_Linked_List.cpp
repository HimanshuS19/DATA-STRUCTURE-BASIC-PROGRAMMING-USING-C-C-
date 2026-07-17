//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Circular Linked List in C++ using VS CODE//

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head=NULL,*tail=NULL,*newNode;

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

        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }

    tail->next=head;

    cout<<"\nCircular Linked List\n";

    Node *temp=head;

    do
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;

    }while(temp!=head);

    cout<<"HEAD";

    return 0;
}