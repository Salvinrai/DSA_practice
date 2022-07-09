#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
	int temp[n];
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			temp[count++]=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			temp[count++]=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<temp[i]<<" ";
		}
	
	
}
int main(){
	int n;
	
	cout<<"enter the no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	rearrange(arr,n);
}
