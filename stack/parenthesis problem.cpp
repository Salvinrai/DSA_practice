#include<iostream>
using namespace std;

class stack{
	public:
		int size;
		int top;
		char * arr;
};

int isEmpty(stack * ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(stack * ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
char pop(stack * ptr ){
	if(isEmpty(ptr)){
		cout<<"stck is empty , stack underflow it cannot be pop from stack"<<endl;
		return -1;	
	}
	else{
		char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
	}
}
void push(stack * ptr , char val){
	if(isFull(ptr)){
		cout<<"stack is overflow , it is  already full"<<endl;
		
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
int match(char * exp){
	stack * sp = new stack();
	sp->size =100;
	sp->top=-1;
	sp->arr = new char[100];
	
	for(int i=0;exp[i]!='\0';i++){
		
		if(exp[i]=='('){
			push(sp,'(');
		}
		else if(exp[i]==')'){
			if(isEmpty(sp)){
				return 0;
			}  
			pop(sp);
		}
	}
	if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
	char * exp = "8*(9)";
	if (match(exp)){
	cout<<"the parentheisi is matching"<<endl;
	
	}
	else{
	cout<<"the parentheis is not matching"<<endl;
	
	}
	return 0;
}
