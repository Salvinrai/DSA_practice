#include<iostream>
using namespace std;
void cycle(int arr[],int n){
	int max_value, sum =0;
	for(int i=0;i<n;i++){
	int temp=arr[n-1];
	for(int k=n-1;k>0;k--){
		arr[k]=arr[k-1];
	}
	arr[0]= temp;
	
	for(int j=0;j<n;j++){
		sum = sum+j*arr[j];
    }

    if(sum>=max_value){
    	max_value=sum;
    	
			}
	sum=0;
	}
	
	cout<<max_value;
	
}

int main(){
	int n;
	cout<<"enter the no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cycle(arr,n);
	
	return 0;
	
}
