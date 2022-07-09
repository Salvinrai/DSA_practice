#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void selection(int *arr,int n){
	for(int i=0;i<n-1;i++){
		
		int indexmain =i;
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[indexmain]){
				indexmain =j;
			}
		}
		int temp= arr[i];
		arr[i]=arr[indexmain];
		arr[indexmain]=temp;
	}
}
int main(){
	int n;
	cout<<"enter the number of element you want to store :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	print(arr,n);
	selection(arr,n);
	print(arr,n);
	
}
