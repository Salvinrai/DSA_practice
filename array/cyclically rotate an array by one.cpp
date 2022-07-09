#include<iostream>
using namespace std;
void cycle(int arr[],int n){
	int temp = arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"how many elements you want to store in array : ";
	cin>>n;
	cout<<"enter elements :"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cycle(arr,n);
	print(arr,n);
}
