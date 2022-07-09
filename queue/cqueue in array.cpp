#include<iostream>
using namespace std;

struct cqueue{
	int size;
	int f;
	int r;
	int * arr;
};

bool isFull(struct cqueue * ptr ){
	if((ptr->r+1)%ptr->size == ptr->f){
		return true;
	}
	return false;
}
bool  isEmpty(struct cqueue * ptr){
	if(ptr->f == ptr->r){
		return true;
		
	}
	return false;
}
void enqueue(struct cqueue *ptr, int val){
	if(isFull(ptr)){
		cout<<"overflow queue is full"<<endl;
	}
	else{
		
		ptr->arr[ptr->r]=val;
		ptr->r=(ptr->r+1)%ptr->size;
		cout<<"entered value :"<<val<<endl;
	}
}
int dequeue(struct cqueue * ptr ){
	int a=-1;
	if(isEmpty(ptr)){
		cout<<"underflow queue is empty"<<endl;
	}
	else{
		
		a = ptr->arr[ptr->f];
		ptr->f=(ptr->f+1)%ptr->size;
		cout<<"dequeue performed"<<endl;
		
	}
	return a;
}
int main(){
	struct cqueue * q = new cqueue;
	q->size=4;
	q->r=0;
	q->f=0;
	q->arr = new int[4];
	enqueue(q,40);
	enqueue(q,10);
	enqueue(q,30);
	dequeue(q);
	dequeue(q);
	enqueue(q,15);
	enqueue(q,35);
	enqueue(q,25);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	
	
}
