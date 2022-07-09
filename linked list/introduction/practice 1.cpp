#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node * next;
};
void print(node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
void insertatfirst(node ** n , int c){
	node * ptr = new node();
	ptr->data=c;
	ptr->next=(*n);
	(*n)=ptr;
}
void insertatend(node ** n ,int c){
	node * ptr = new node();
	ptr->data=c;
	node * p =(*n);
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
}
void insertatbetween(node ** n,int c,int index){
	node * ptr = new  node();
	ptr->data =c;
	int i=1;
	node *p =(*n);
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
}
int main(){
	node* head= NULL;
	node* first= NULL;
	node* second= NULL;
	node* third= NULL;
	
	head =new node();
	first = new node();
	second = new node();
	third = new node();
	
	head->data=20;
	head->next= first;
	first->data=40;
	first->next= second;
	second->data= 60;
	second->next=third;
	third->data=80;
	third->next= NULL;
	start:
	cout<<" current data in linked list : ";
	print(head);
	int c,d;
	cout<<"\n--------------------------------------------------\n";
	cout<<" SELECT THE OPTIONS : \n";
	cout<<"--------------------------------------------------\n";
	cout<<" 1. INSERT ELEMENT AT FIRST : \n";
	cout<<" 2. INSERT ELEMENT AT END : \n";
	cout<<" 3. INSERT ELEMENT AT BETWEEN : \n";
	cout<<" enter your choice : ";
	cin>>d;
	switch(d)
	{
		case 1:
	
	          cout<<"\nenter the number you want to insert at first : ";
	          cin>>c;
	          insertatfirst(&head,c);
	          print(head);
	          break;
	    case 2:
	    	
	          cout<<"\nenter the number you want to insert at end : ";
	          cin>>c;
	          insertatend(&head,c);
	          print(head);
	          break;
	    case 3:
	    	cout<<"\n enter the number you want to insert at between : ";
	    	cin>>c;
	    	int a;
	    	cout<<" \n enter the index number you want to enter : ";
	    	cin>>a;
	    	insertatbetween(&head,c,a);
	    	print(head);
	    	break;
	    
	    	
	    default:
	    	cout<<"please enter the correct option: ";
	    	break;
    }
    int a;
    cout<<" \ndo you want to continue 1: yes 2:no ";
    cin>>a;
    if(a==1){
    	goto start;
	}
	else
	 cout<<" done exit ::";
}
