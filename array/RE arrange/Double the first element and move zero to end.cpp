#include<iostream>
using namespace std;
void zero(int arr[],int n){
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[count]=arr[i];
			count++;
		}
	}
	while(count<n){
		arr[count]=0;
		count++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void rearrange(int arr[],int n){
	if(n==1){
		return;
	}
	for(int i=0;i<n-1;i++){
		if((arr[i]!=0)&&arr[i]==arr[i+1]){
			arr[i]= 2*arr[i];
			arr[i+1]=0;
			i++;
		}
	}
	zero(arr,n);
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rearrange(arr,n);
}
