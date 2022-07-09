#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
	public:
		int data;
		node * next;
};
void delfirst(node ** head){
	node * ptr = (*head);
	(*head)=(*head)->next;
	free(ptr);
	
}
void delindex(node **head,int index){
	node * ptr = (*head);
	node * q =(*head)->next;
	int i=1;
	while(i!=(index-1)){
		ptr=ptr->next;
		q=q->next;
		i++;
	}
	ptr->next=q->next;
	free(q);
}
void delend(node **head){
	node * ptr =*head;
	node *p = (*head)->next;
	while(p->next!=NULL){
		ptr=ptr->next;
		p=p->next;
	}
	ptr->next = NULL;
	free(p);
}
void print(node * head){
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
int main(){
	node * head  =NULL;
	node * second  =NULL;
	node * third =NULL;
	node * fourth=NULL;
	node * fifth=NULL;
	node * six=NULL;
	
	head = new node();
	second = new node();
	third = new node();
	fourth = new node();
	fifth = new node();
	six = new node();
	
	head->data =1;
	head->next =second;
	second->data =2;
	second->next =third;
	third->data =3;
	third->next =fourth;
	fourth->data =4;
	fourth->next =fifth;
	fifth->data =5;
	fifth->next =six;
	six->data =6;
	six->next =NULL;
	cout<<"printing the element"<<endl;
	print(head);
	//delition at first
	cout<<"\ndelition at first"<<endl;
	delfirst(&head);
	print(head);
	//delition at index
	cout<<"\ndelition at index"<<endl;
	delindex(&head,3);
	print(head);
	//delition at end
	cout<<"\ndelition at end"<<endl;
	delend(&head);
	print(head);
	
	
}
