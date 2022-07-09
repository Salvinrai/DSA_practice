#include<iostream>
using namespace std;
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void bubble(int *A,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
			
			temp= A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
}
}

int main(){
	int n;
	cout<<"enter the number of arrays :"<<endl;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	print(A,n);
	bubble(A,n);
	print(A,n);
	
}
