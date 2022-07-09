#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class node{
	public:
	int data ;
	node * next;
};
int isEmpty(node * ptr){
	if(ptr==NULL){
		return 1;
	}
	else
	 return 0;
}
int isFull(node * ptr){
	node * p =(node *)malloc(sizeof(node));
	if(p==NULL){
		return 1;
	}
	else
	 return 0;
}
node * push(node *ptr,int val){
	if(isFull(ptr)){
		cout<<"stack is over flow"<<endl;
	}
	else{
		node * p = new node();
		p->data=val;
		p->next=ptr;
		ptr=p;
		return ptr;
	}
}
int pop(node **ptr){
	if(isEmpty(*ptr)){
		cout<<"stack is empty"<<endl;
	}
	else{
		node * p = new node();
		p = (*ptr);
		*ptr=(*ptr)->next;
		int x = p->data;
		free(p);
		return x;
	}
}
void peek(node * ptr,int pos){
	node * p =ptr;
	for(int i=0;(i<pos-1&&p!=NULL);i++){
		p=p->next;
	}
	if(p!=NULL){
		cout<<"element at index "<<pos-1<<" is : "<<p->data<<endl;
		
	}
	else{
		cout<<"postion is not valid";
	}
}
void display(node * ptr){
 while(ptr!=NULL){
 	cout<<"ELEMENTS ARE :"<<ptr->data<<endl;
 	ptr=ptr->next;
 }
}



int main(){
	node * top=NULL;
	int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) stack in index way peek operation"<<endl;
   cout<<"5) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            top=push(top,val);
            break;
         }
         case 2: {
            pop(&top);
            break;
         }
         case 3: {
            display(top);
            break;
         }
         case 4:{
         	int a;
         	cout<<"enter the index you want : ";
         	cin>>a;
         	peek(top,a);
			break;
		}
         case 5:{
         	cout<<"Exit"<<endl;
			break;
		 }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
	
}
