#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node * next;
};

void insertatfirst(node ** head,int n){
	node * ptr = new node();
	ptr->data=n;
	ptr->next=(*head);
	(*head)=ptr;
	
	
	
	
}
void insertatend(node ** head, int n){
	node *ptr =new node();
	ptr->data=n;
	node * p = (*head);
	while(p->next != NULL){
		p= p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
}
void insertatbetween(node ** head,int n,int index){
	node *ptr =new node();
	ptr->data=n;
	node *p =(*head);
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	
}
void insertatnode(node **head,int n,node *prev){
	node *ptr =new node();
	ptr->data=n;
	ptr->next=prev->next;
	prev->next=ptr;
}
void print(node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
	node* head = NULL;
	node* second = NULL;
	node* third = NULL;
	node* forth = NULL;
	
	head = new node();
	second = new node();
	third = new node();
	forth = new node();
	
	head->data=1;
	head->next = second;
	second->data=32;
	second->next = third;
	third->data=42;
	third->next = forth;
	forth->data=90;
	forth->next = NULL;
	cout<<"print element :"<<endl;
	print(head);
	
	cout<<"\ninsertion at first :"<<endl;
	insertatfirst(&head,54);
	print(head);
	cout<<"\ninsertion at end :"<<endl;
	insertatend(&head,60);
	print(head);
	cout<<"\ninsertion at between :"<<endl;
	insertatbetween(&head,30,2);
	print(head);
	cout<<"\ninsertion after node :"<<endl;
	insertatnode(&head,100,third);
	print(head);
	
	
}
