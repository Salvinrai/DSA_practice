#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node{
	public:
		int data;
		struct node * next;
}*head;
class solution{
 public:
  void print(node * head){
  	cout<<"values are :";
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
  }
};
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
int main(){
	int n,value,a;
	do{
	
	cout<<"-------------------------------\n";
	cout<<"1. Insert the value: \n";
	cout<<"2. delete the value: \n";
	cout<<"3. print the value: \n";
	cout<<"4. exit \n";
	cout<<" enter you choice : ";
	cin>>a;
	switch(a){
	case 1:
	 cout<<"enter no of element you want to store : ";
	 cin>>n;
	 head =NULL;
	 struct node * temp;
	
	 for(int i=0;i<n;i++){
		cin>>value;
		if(i==0){
			head = (struct node *)malloc(sizeof(struct node));
			head->data =value;
			head->next=NULL;
			temp=head;
			continue;
		}
		else{
			temp->next = (struct node *)malloc(sizeof(struct node));
			temp=temp->next;
			temp->data=value;
			temp->next=NULL;
		}
	 }
	 break;
	case 2:
		cout<<"\ndelition at end\n"<<endl;
	    delend(&head);
	    break;
	case 3:
		solution ob;
	    ob.print(head);
	    break;
	case 4:
		cout<<"exit";
		break;
	default:
		cout<<"you have enter a wrong number :";
	}
	}while(a!=4);
		

}
