#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b){
	int val = *a;
	*a =*b;
	*b=val;
}
void rearrange(int arr[],int n){
	srand(time(NULL));
	for(int i=n-1;i>0;i--){
		int j= rand()%(i+1);
		
		swap(&arr[i],&arr[j]);
	}
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<" enter element :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rearrange(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
