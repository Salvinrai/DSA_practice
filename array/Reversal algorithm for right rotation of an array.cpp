#include<iostream>
using namespace std;
void reverseby(int arr[],int start,int end){
	while(start<end){
	
	int temp= arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}
void reversal(int arr[],int n,int k){
	if(k==0){
		return;
	}
	
	reverseby(arr,0,n-k-1);
	reverseby(arr,n-k,n-1);
	reverseby(arr,0,n-1);
}
print(int arr[],int n){
	for(int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}
int main(){
	int n,k;
	cout<<"how many elements you want to store :";
	cin>>n;
	cout<<"\ntill how many number you want to rotate from right side :";
	cin>>k;
	int arr[n];
	cout<<"\nenter elements :"<<endl;
	for(int i=0 ;i<n;i++){
		cin>>arr[i];
		
	}
	reversal(arr,n,k);
	print(arr,n);
	return 0;
}
