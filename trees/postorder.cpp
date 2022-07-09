#include<iostream>
using namespace std;

struct node{
	int data;
	struct node * left;
	struct node * right;
	
};
struct node * newnode(int data){
	struct node * n = new node;
	n->data= data;
	n->left = NULL;
	n->right=NULL;
	return n;
	
}
void postorder(struct node * root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}

int main(){
	struct node * p = newnode(4);
	struct node * p1 = newnode(1);
	struct node * p2 = newnode(6);
	struct node * p3 = newnode(5);
	struct node * p4 = newnode(2);
	
	p->left=p1;
	p1->left=p3;
	p1->right=p4;
	p->right=p2;
	cout<<"the values are : "<<endl;
	postorder(p);
	
}
