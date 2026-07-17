//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for BST Inorder Traversal in C++ using VS CODE//

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

void inorder(Node *root)
{
    if(root==NULL)
        return;

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);
}

int main()
{
    Node *root=new Node(40);

    root->left=new Node(20);
    root->right=new Node(60);

    root->left->left=new Node(10);
    root->left->right=new Node(30);

    root->right->left=new Node(50);
    root->right->right=new Node(70);

    cout<<"Inorder Traversal\n";

    inorder(root);

    return 0;
}