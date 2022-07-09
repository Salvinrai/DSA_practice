#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[count++]=arr[i];
		}
	}
	while(count<n){
		arr[count++]=0;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		}
	
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rearrange(arr,n);
}
