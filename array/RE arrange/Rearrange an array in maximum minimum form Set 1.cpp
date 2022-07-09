#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
	int temp[n];
	int j=n-1;
	for(int i=0;i<n;i++){
		temp[i]=arr[i];
	}
	for(int i=0;i<n;i+=2){
		arr[i]=temp[j];
		j--;
	}
	j=0;
	for(int i=1;i<n;i+=2){
		arr[i]=temp[j];
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"enter how many element you want to store :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	rearrange(arr,n);
}
