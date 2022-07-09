#include<iostream>
using namespace std;

class stack{
	public:
		int size;
		int top;
		char * arr;
};

int isEmpty( stack * ptr){
	if(ptr->top==-1){
		return 1;
		
	}
	else {
		return 0;
	}
}
int isFull( stack * ptr){

 if(ptr->top==ptr->size-1)
 {
	return 1;
	
 }
 else{
	return 0;
}
}
void push(stack * ptr , char val){
	if(isFull(ptr)){
		cout<<"stack is overflow "<<endl;
	}
	else {
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
int pop(stack * ptr){
	if(isEmpty(ptr)){
		cout<<"stack is under flow"<<endl;
		return -1;
	}
	else{
		char val = ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int match(char a,char b){
	if(a=='('&& b==')'){
		return 1;
	}
	else if(a=='{' && b=='}'){
		return 1;
	}
	else if(a=='[' && b==']'){
		return 1;
	}
	return 0;
}
int matchp(char * exp){
	stack * sp = new stack();
	sp->size=100;
	sp->top-1;
	sp->arr = new char[100];
	
	char br;
	
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
			push(sp,exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
			if(isEmpty(sp)){
				return 0;
			}
			br =pop(sp);
			if(!match(br,exp[i])){
				return 0;
			}
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
	char * exp = "{20}";
	if(matchp(exp)){
		cout<<" matching";
	}
	else{
		cout<<" not matching";
	}
	return 0;
	
}
	
	
	

