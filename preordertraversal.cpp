#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    preorder(root);
    return 0;
}