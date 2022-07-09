#include<iostream>
using namespace std;
int least(int arr[],int n){
	int min,min_index;
	min = arr[0];
	for(int i=0;i<n;i++){
		if(min>arr[i])
		 min_index= i;
	}
	cout<<min_index;
}
int main(){
	int n;
	cout<<"enter the no of element you want to store : ";
	cin>>n;
	int arr[n];
	cout<<"enter elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	least(arr,n);
	return 0;
	
}
