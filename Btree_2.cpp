
#include <cstdlib>
#include<stdio.h>
#include<iostream>
using namespace std;

// create a binary tree with  add , delete , inorder, postorder , preorder

class Node{
public:
Node *parent,*left,*right;
int data;
Node(){
parent=NULL;
left=NULL;
right=NULL;
data=0;
}
};//eoc

class Tree{
public:
Node *root;

Tree(){root=NULL;}
void add(Node *np,int d);
int del(Node *np,int d);
void inorder(Node * n);
void preorder(Node *n);
void postorder(Node *n);
Node * findMin(Node * np);
};

void Tree:: inorder(Node * np){
if(np!=NULL){
inorder(np->left);
cout<<np->data<<"\t";
inorder(np->right);
}
}

void Tree:: preorder(Node *np){
if(np!=NULL){
preorder(np->left);
preorder(np->right);
cout<<np->data<<"\t";
}
}

void Tree:: postorder(Node*np){
if(np!=NULL){
cout<<np->data<<"\t";
postorder(np->left);
postorder(np->right);
}
}//eof

Node * Tree::findMin(Node * np){
if(np==NULL)return np;
else{
 while(np->left!=NULL){
 np=np->left;
 }//while
 return np;
}//else
}//eof

int Tree:: del(Node *np,int d){
Node *temp=NULL;
if(np->data!=d && np->right==NULL && np->left==NULL){return(0);}
// find the node with the value
if(np->data< d){del(np->right,d);}
else{//else1
if(np->data > d){del(np->left,d);}
else{//else2
//found the node to be deleted
// three cases
if(np->right ==NULL && np->left ==NULL){
// has no child , delete and update parent
if(np->parent->data>np->data){np->parent->left=NULL;}
else{np->parent->right=NULL; delete np;}
}
else{
if(np->right ==NULL || np->left ==NULL){
// has one child sub tree, attach the sub tree to ancestor and delete
if(np->parent->data>np->data){
if(np->right!=NULL){np->parent->left=np->right;}
else{np->parent->left=np->left; delete np;}
}
else{
if(np->right!=NULL){np->parent->right=np->right;}
else{np->parent->right=np->left; delete np;}
}//else

}//if
else{
// has both sub trees , find the smallest value in the right sub tree and update it in this node and delete duplicate
temp=findMin(np->right);
if(temp->parent->data <temp->data){temp->parent->right=NULL;}
else{temp->parent->left=NULL;}    
np->data=temp->data;
//temp->parent->left=NULL; 
delete temp;
}//else
}

}//else2
}//else1
return 0;
} //eof



void Tree::add(Node* np,int d){
Node *n=new Node;
Node *temp=np;
if(root==NULL){
root=n;
root->parent=NULL;
root->left=NULL;
root->right=NULL;
root->data=d;
}//if
else{
if(np->data < d){
//right child
if(np->right==NULL){temp->right=n;temp=temp->right; temp->parent=np; temp->left=NULL; temp->right=NULL;temp->data=d;}
else{add(np->right,d);}//recursive call with right child as new base
}//if
else{
//left child
if(np->left==NULL){temp->left=n;temp=temp->left; temp->parent=np; temp->left=NULL;temp->right=NULL; temp->data=d;}
else{add(np->left,d);}
}
}//else
}


/*int main(int argc, char** argv) {
    int choice=0;
    int value=0;
    Tree obj;
    while(choice!=6){
        cout<<"1-Add 2-Delete 3-Inorder 4-Preorder 5-Postorder 6-Exit \n";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter the data to Add \n";
                cin>>value;
                obj.add(obj.root,value);
                break;}
            case 2:{
                cout<<"Enter the data to Delete \n";
                cin>>value;                
                obj.del(obj.root,value);
                break;}
            case 3:{
                obj.inorder(obj.root);
                cout<<endl;
                break;}
            case 4:{
                obj.preorder(obj.root);
                cout<<endl;
                break;}
            case 5:{
                obj.postorder(obj.root);
                cout<<endl;
                break;}           
            
        }
    }
    return 0;
}*/
