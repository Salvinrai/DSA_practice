#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
void insert(node **head,int arr[],int a){

	for(int i=0;i<a;i++){
	node *p =(*head);
	if(p==NULL){
		p->data=arr[i];
		p->next=NULL;
	}
	else{
		while(p!=NULL){
			p=p->next;
		}
		p->data=arr[i];
		p->next=NULL;
	}
}

}
void print(node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
	
	node *head=NULL;
	head =new node();
	int a;
	cout<<" enter no of entries you want to insert";
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++){
		cin>>arr[i];
		
	}
	insert(&head,arr,a);
	
	print(head); 
	
}
