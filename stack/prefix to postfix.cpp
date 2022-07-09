#include<iostream>
using namespace std;
class stack{
	public:
		int size;
		int top;
		char * arr;
};
bool isFull(stack * ptr){
	if(ptr->top==ptr->size-1){
		return true;
	}
	else{
		return false;
	}
}
bool isEmpty(stack * ptr){
	if(ptr->top==-1){
		return true;
	}
	else{
		return false;
	}
}
void push(stack * ptr, char val){
	if(isFull(ptr)){
		cout<<"stack is overflow "<<endl;
		
	}
	else{
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
bool isoperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
		return true;
	}
	else{
		return false;
	}
}
int precedence(char ch){
	if(ch=='+'|| ch =='-'){
		return 1;
	}
	else if(ch=='*'|| ch =='/'){
		return 3;
	}
	else{
		return 0;
	}
}
int stacktop(stack * ptr){
	return ptr->arr[ptr->top];
}

char * prefixtopostfix(char * infix){
	stack * sp = new stack();
	sp->size=100;
	sp->top=-1;
	sp->arr = new char[100];
	char * postfix = new char[20];
	
	int i,j=0;
	while(infix[i]!='\0'){
		
		if(!isoperator(infix[i])){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(sp))){
				push(sp,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(sp);
				j++;
			}
		}
		
	}
	while(!isEmpty(sp)){
		postfix[j]=pop(sp);
		j++;
	}
	postfix[j]='\0';
	return postfix;
}


int main(){
	char * exp = "a+b";
	cout<<"prefix is :"<<prefixtopostfix(exp)<<endl;
	
	
	
}

