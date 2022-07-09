#include<iostream>
using namespace std;
void print(int arr[],int n);
void reverse(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void query(int arr[],int n,int t,int d,int end){
	if(t==0){
		return ;
	}
	else if(t==1){
		reverse(arr,0,n-d-1);
		reverse(arr,n-d,n-1);
		reverse(arr,0,n-1);
	}
	else if(t==2){
		reverse(arr,0,d-1);
		reverse(arr,d,n-1);
		reverse(arr,0,n-1);
	}
	else if(t==3){
		int sum=0;
		for(int i=d;i<end+1;i++){
			 sum = sum + arr[i];
		}
		cout<<"sum is "<<sum<<endl;
		
	}
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	query(arr,n,1,3,0);
	print(arr,n);
	query(arr,n,3,0,2);
	query(arr,n,2,1,0);
	print(arr,n);
	query(arr,n,3,1,4);
	
	
}
