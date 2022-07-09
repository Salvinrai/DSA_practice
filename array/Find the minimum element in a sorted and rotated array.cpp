#include<iostream>
using namespace std;
void min(int arr[],int n){
	int min ;
	min=arr[0];
	for(int i=0;i<n;i++){
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"\nthe min element is : "<<min;
}
int main(){
	int n;
	cout<<"how many elements you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter elements :"<<endl;
	for(int i=0 ;i<n;i++){
		cin>>arr[i];
		
	}
	min(arr,n);
	return 0;
}
