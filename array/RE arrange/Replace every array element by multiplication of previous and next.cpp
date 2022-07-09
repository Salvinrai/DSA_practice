#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
	if(n<=1){
		return;
		
	}
	int pre = arr[0];
	arr[0]=arr[0]*arr[1];
	for(int i=1;i<n-1;i++){
		int cur = arr[i];
		
		arr[i]=pre*arr[i+1];
		pre = cur;
	}
	arr[n-1]= pre*arr[n-1];
	
}
int main(){
	int n;
	cout<<"enter the no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element :"<<endl;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	rearrange(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
