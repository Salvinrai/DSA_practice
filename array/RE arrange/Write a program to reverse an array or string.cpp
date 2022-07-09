#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
	while(start<end){
		int temp= arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"enter how many element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter the elemnt :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr,0,n-1);
	print(arr,n);
	return 0;
}
