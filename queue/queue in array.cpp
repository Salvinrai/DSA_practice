#include<iostream>
using namespace std;

class queue{
	public:
	int size;
	int f;
	int r;
	int * arr;
};

bool isFull(queue * q){
	if(q->r==q->size-1){
		return true;
	}
	else{
	
	return false;}
}
bool isEmpty(queue * ptr){
	if(ptr->f==ptr->r){
		return true;
	}
	return false;
}
void enqueue(queue * ptr , int val){
	if(isFull(ptr)){
		cout<<"queue is full"<<endl;
	}
	else{
		ptr->r++;
		ptr->arr[ptr->r]=val;
	}
}
int dequeue(queue * ptr){
	int a=-1;
	if(isEmpty(ptr)){
		cout<<"queue is empty"<<endl;
	}
	else{
		ptr->f++;
		a = ptr->arr[ptr->f];
		
	}
	return a;
}
void display(queue * ptr){
	cout<<"elements in queue is : ";
	if(ptr->f==-1){
		for(int i=0;i<=ptr->r;i++){
		cout<<ptr->arr[i]<<" ";
	}
	cout<<endl;
	}
	else{
	
	for(int i=ptr->f;i<=ptr->r;i++){
		cout<<ptr->arr[i]<<" ";
	}
	cout<<endl;
}
}

int main(){
	queue * q = new queue();
	q->size =10;
	q->f=-1;
	q->r=-1;
	q->arr = new int[10];
	int ch, val;
	
   cout<<"1) enqueue in queue"<<endl;
   cout<<"2) dequeue in queue"<<endl;
   cout<<"3) Display queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            enqueue(q,val);
            break;
         }
         case 2: {
            dequeue(q);
            break;
         }
         case 3: {
            display(q);
            break;
         }
         case 4:{
         	cout<<"Exit"<<endl;
			break;
		 }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
	
	
}
