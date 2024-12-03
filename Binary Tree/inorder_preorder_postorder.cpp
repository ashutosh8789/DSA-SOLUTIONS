#include <bits/stdc++.h>
using namespace std;


class node {
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left : "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<endl;
    root->right = buildTree(root->right);


    return root;
}

//Inorder traversal

void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);


}

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);


}

void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}


int main(int argc, char const *argv[])
{

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    root=buildTree(root);

    cout<<"inorder traversal: ";
    inOrder(root);
    cout<<endl;
    cout<<"preOrder traversal: ";
    preOrder(root);
    cout<<endl;

    cout<<"postOrder traversal: ";
    postOrder(root);

    return 0;
}
