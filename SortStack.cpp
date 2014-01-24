#include <cstdlib>
#include<stdio.h>
#include<iostream>
using namespace std;

// sort a stack by using only another stack as buffer

class Node{
public:
Node *next,*prev;
int data;
Node(){
next=NULL;
prev=NULL;
data=0;
}
};

class Stack{
public:
Node *head,*tail;
Stack(){
head=NULL;
tail=NULL;
}
int pop();
void push(int d);
bool isEmpty();
int peek();
void sortArray(Stack s2);
void displayStack();
};

void Stack ::displayStack(){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->prev;
}
    cout<<"\n";
}
bool Stack::isEmpty(){
return (head==NULL);
}

int Stack::peek(){
if(tail==NULL){
return -1;
}
else{
return tail->data;
}//else
}

int Stack:: pop(){
Node *temp=tail;
int value=0;
	if(head==NULL){
		return -1;
	}
	else{
            if(tail==head){
                value=temp->data;
                head=NULL;
                tail=NULL;
                delete temp;
            }
            else{
                value=temp->data;
                tail=temp->prev;
                if(tail!=NULL){
                tail->next=NULL;}
                delete(temp);
            }
	}
	return value;
}//eof

void Stack::push(int d){
Node *n=new Node;
Node *temp=tail;
if(head==NULL){
head=n;
head->prev=NULL;
head->next=NULL;
head->data=d;
tail=head;
}
else{
temp->next=n;
tail=temp->next;
tail->data=d;
tail->prev=temp;
tail->next=NULL;
}
}//eof

void Stack:: sortArray(Stack s2){
Node *temp=tail;
int buf=0,count=0;
if(head!=NULL){
	while(!isEmpty()){
		buf=pop();
		while(s2.peek()>buf){
			push(s2.pop());
			count++;
		}
		s2.push(buf);
		while(count>0){
		s2.push(pop());
		count--;
		}//sending the elements of s2 back to s2
	}
         s2.displayStack();
}
else{ cout<<"The Stack is Empty \n";}

}//eof

/*int main(int argc, char** argv) {
    Stack s1,s2;
    int num=0,size=0,i=0;
    cout<<"Enter the size of stack 1 \n";
    cin>>size;
    cout<<"Enter the values in stack \n";
    while(i<size){
        cin>>num;
        s1.push(num);
        i++;
    }
    s1.displayStack();
    s1.sortArray(s2);
    return 0;
}*/

