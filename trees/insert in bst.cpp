#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left;
	struct node * right;
};
struct node * createnode(int data){
	struct node * n = new node();
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
struct node * insert(struct node * root,int key){
	struct node * prev = NULL;
	
	while(root != NULL){
		prev = root;
		if(key<root->data){
			root = root->left;
			
		}
		else{
			root = root->right;
			
		}
	}
	
	if(prev==NULL){
		prev=createnode(key);
		
	}
	else if(key<prev->data){
		prev->left=createnode(key);
	}
	else{
		prev->right=createnode(key);
	}
	return prev;
}
void inorder(struct node * root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
		
	}
}

int main(){
	struct node * root =NULL;
	root = insert(root,60);
	insert(root,50);
	insert(root,33);
	insert(root,78);
	insert(root,23);
	insert(root,38);
	insert(root,20);
	
	inorder(root);
	
	
}
