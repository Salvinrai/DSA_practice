#include<iostream>
using namespace std;
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void insertsort(int *A,int n){
	int key,j;
	
	for(int i=1;i<n;i++){
		key = A[i];
		j = i-1;
		
		while( j>=0 && A[j] > key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
		
	}
}
int main(){
	int n;
	int A[n];
	cout<<" enter no of element you want to store :";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	print(A,n);
	insertsort(A,n);
	print(A,n);
}
