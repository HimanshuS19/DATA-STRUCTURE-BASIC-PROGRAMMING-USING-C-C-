//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Searching in Binary Search Tree using C++//

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* insert(Node *root,int value)
{
    if(root==NULL)
        return new Node(value);

    if(value<root->data)
        root->left=insert(root->left,value);

    else
        root->right=insert(root->right,value);

    return root;
}

bool search(Node *root,int key)
{
    if(root==NULL)
        return false;

    if(root->data==key)
        return true;

    if(key<root->data)
        return search(root->left,key);

    return search(root->right,key);
}

int main()
{
    Node *root=NULL;

    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    int key;

    cout<<"Enter Element to Search : ";
    cin>>key;

    if(search(root,key))
        cout<<"\nElement Found.";

    else
        cout<<"\nElement Not Found.";

    return 0;
}