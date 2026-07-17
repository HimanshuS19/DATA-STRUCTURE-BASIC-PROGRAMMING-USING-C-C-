//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Binary Tree Preorder Traversal in C++ using VS CODE//

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

void preorder(Node *root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root=new Node(10);

    root->left=new Node(20);
    root->right=new Node(30);

    root->left->left=new Node(40);
    root->left->right=new Node(50);

    cout<<"Preorder Traversal\n";

    preorder(root);

    return 0;
}