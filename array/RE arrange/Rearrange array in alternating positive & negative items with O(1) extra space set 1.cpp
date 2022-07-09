#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
	int even =n/2;
	int odd=n-even;
	int temp[n];
	for(int i=0;i<n;i++){
		temp[i]=arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(temp[i]>temp[j]){
				int val = temp[i];
				temp[i]=temp[j];
				temp[j]=val;
			}
		}
	}
	int j=0;
	for(int i=0;i<n;i+=2){
		arr[i]=temp[j];
		j++;
	}
	j=odd;
	for(int i=1;i<n;i+=2){
		arr[i]=temp[j];
		j++;
	}
	
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"how many element you want to store : ";
	cin>>n;
	int arr[n];
	cout<<"enter element : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rearrange(arr,n);
	print(arr,n);
}
