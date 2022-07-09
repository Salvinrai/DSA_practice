#include<iostream>
using namespace std;
void rearrange(int arr[],int index[],int n)
{ int temp[n];
  
	for(int i= 0;i<n;i++){
		temp[i]=arr[index[i]];
	}
	for(int i= 0;i<n;i++){
		arr[i]=temp[i];
	}
	
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"enter no of element you want to enter :";
	cin>>n;
	int arr[n];
	cout<<"enter elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int index[n];
	cout<<"\n enter the index as per you want : "<<endl;
	for(int i=0;i<n;i++){
		cin>>index[i];
		
	}
	rearrange(arr,index,n);
}
