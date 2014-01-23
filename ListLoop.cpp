/* 
 * File:   main.cpp
 * Author: Sam
 *
 * Created on January 22, 2014, 9:30 PM
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream.h>
using namespace std;


class Node{
public:
Node *next;
int data;
};

class LList{
public:
Node *head;

LList(){
head=NULL;
}
void createLoopy();
Node* addNode(int d);
void findLoopy();
};

Node* LList :: addNode(int d){
Node *n=new Node;
Node *temp=head;
if(head==NULL){
head=n;
head->next=NULL;
head->data=d;
}
else{
while(temp->next!=NULL){temp=temp->next;}
temp->next=n;
temp=temp->next;
temp->data=d;
temp->next=NULL;
}//else
return n;
}//eof


void LList :: createLoopy(){
Node *temp,*lnode;
int value,loop;
cout<<"Enter a number b/n 4-8 inclusive\n";
cin>>loop;
cout<<"enter 10 numbers"<<endl;
int i=0;
while(i<10)
{
cin>>value;
temp=addNode(value);
if(i==loop-1){lnode=temp;}
i++;
}
temp->next=lnode; // created the loop
cout<<"Loop point is ="<<lnode<<"\t with data = "<<lnode->data<<endl;
}//eof


void LList:: findLoopy(){
Node *slow=head,*fast=head->next;
if(head==NULL)
{
cout<<"List is Empty"<<endl;
}
else{
while(slow!=fast || slow==NULL){
slow=slow->next;
fast=slow->next;
}
if(slow==NULL){cout<<"List has no loops \n";}
else{
slow=head;
while(slow!=fast){
slow=slow->next;
fast=fast->next;
}//while
cout<<"Loop was found at : "<<slow<<"\t with value = "<<slow->data<<endl;
}//else

}//else

}//eof



/*int main(int argc, char** argv) {
    LList obj;
    obj.createLoopy();
    obj.findLoopy();
    return 0;
}*/


