#include<iostream>
using namespace std;
void oddeven(int arr[],int n){
	int count=0;
	int temp[n];
	for(int i=0 ;i<n;i++){
		if(arr[i]%2==0){
			temp[count++]=arr[i];
		}
	}
	for(int i=0 ;i<n;i++){
		if(arr[i]%2!=0){
			temp[count++]=arr[i];
		}
	}
		for(int i=0 ;i<n;i++){
	     cout<<temp[i]<<" ";
		}
	
	
	
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	oddeven(arr,n);
}
