#include<iostream>
using namespace std;
class stack{
	public:
	int size;
	int top;
	int * arr;
	
};
int isFull(stack * ptr){
	if(ptr->top==ptr->size-1){
		return 1;
		
	}
	else{
		return 0;
	}
}
int isEmpty(stack * ptr){
	if(ptr->top==-1){
		return 1;
		
	}
	else{
		return 0;
	}
}
void push(stack * ptr , int val){
	if(isFull(ptr)){
		cout<<"stack is overflow , it is  already full"<<endl;
		
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
void pop(stack * ptr ){
	if(isEmpty(ptr)){
		cout<<"stck is empty , stack underflow it cannot be pop from stack"<<endl;
			
	}
	else{
		
		ptr->top--;
	}
}
int peek(stack * ptr , int i){
	int a = ptr->top -i +1;
	if(a<0){
		cout<<"not a valid position for the stack"<<endl;
		return -1;
	}
	else
	 {
	 	return ptr->arr[a];
	 }
}
void display(stack * ptr){
if(ptr->top>=0){
	cout<<"elements in stack is are : ";
	for(int i=ptr->top;i>=0;i--){
		cout<<ptr->arr[i]<<" ";
	}
	
}
else{
	cout<<"stack is empty";
	
}
}


int main(){
	stack *sp = new stack();
	sp->size=10;
	sp->top=-1;
	sp->arr= new int[10];
	
	int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) stack in index way peek operation"<<endl;
   cout<<"5) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(sp,val);
            break;
         }
         case 2: {
            pop(sp);
            break;
         }
         case 3: {
            display(sp);
            break;
         }
         case 4: {
            for(int i=1;i<=sp->top+1;i++){
            	cout<<"the value of index "<<i<<" is "<<peek(sp,i)<<endl;
			}
            break;
         }
         case 5:{
         	cout<<"Exit"<<endl;
			break;
		 }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
	
	
}
