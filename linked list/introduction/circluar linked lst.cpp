#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node * next;
};
void printtransversal(node * head){
	node * ptr = head;
	do{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
		
	}while(ptr!=head);
}
int main(){
	node * head =NULL;
	node * first =NULL;
	node * second =NULL;
	node * third =NULL;
	
	head = new node();
	first = new node();
	second = new node();
	third = new node();
	
	head->data =30;
	head->next=first;
	first->data = 40;
	first->next =second;
	second->data = 50;
	second->next =third;
	third->data = 60;
	third->next =head; // converting single linked list to circular linked list by pointing towards the head
	
	printtransversal(head);
	
}
