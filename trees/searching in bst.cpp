#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left;
	struct node * right;
};

struct node * createnode(int data){
	struct node * n =new node();
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
	
} 
void inorder(struct node * root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
		
	}
}
struct node * search(struct node * root, int key){
	if(root==NULL){
		return NULL;
	}
	if(key==root->data){
		cout<<"data is found "<<root->data;
		return root;
	}
	else if(key>root->data){
		return search(root->right,key);
	}
	else{
		return search(root->left,key);
	}
}
int main(){
	struct node * p = createnode(40);
	struct node * p1 = createnode(30);
	struct node * p2= createnode(50);
	struct node * p3 = createnode(35);
	struct node * p4= createnode(28);
	struct node * p5 = createnode(55);
	
	p->left = p1;
	p->right=p2;
	p1->right=p3;
	p1->left=p4;
	p2->right=p5;
	
	inorder(p);
	cout<<"\n enter the number you want ro search : ";
	int key;
	cin>>key;
	search(p,key);
	
	
	
	
}
