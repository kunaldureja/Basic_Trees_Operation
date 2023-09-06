#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
}*root =NULL;

node* insert(int data1){
    node *t = root;
    node *p;
    node *r = NULL;
    if(root==NULL){
        p = new node;
        p->data = data1;
        cout<<p->data<<" ";
        p->left=p->right = NULL;
        root = p;
    }
    while(t!=NULL){
        r = t;
        if(data1<t->data){
            t = t->left;
        }
        else
        t = t->right;
    }
    p = new node;
    p->data = data1;
    cout<<p->data<<" ";
    p->left=p->right=NULL;
    if(data1<r->data)
    r->left = p;
    else
    r->right = p;

}
void preorder(node *t1){
    while(t1!=NULL){
        cout<<t1->data<<" ";
        preorder(t1->left);
        preorder(t1->right);
    }
}
int main(){
    insert(8);
    insert(10);
    insert(5);
    insert(6);
    preorder(root);
    return 0;
}