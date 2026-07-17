//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Finding Minimum and Maximum in BST using C++//

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

int minimum(Node *root)
{
    while(root->left!=NULL)
        root=root->left;

    return root->data;
}

int maximum(Node *root)
{
    while(root->right!=NULL)
        root=root->right;

    return root->data;
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

    cout<<"Minimum Element = "<<minimum(root)<<endl;
    cout<<"Maximum Element = "<<maximum(root)<<endl;

    return 0;
}