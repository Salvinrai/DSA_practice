#include<iostream>
using namespace std;
void print(int arr[],int n);
void rotate(int arr[],int n){
	int temp=arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;

}
void rotateby(int arr[],int n,int d){
	for(int i=0;i<d;i++)
	 {
	 rotate(arr,n);
	 }
	 print(arr,n);
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n,k,d;
	cout<<"enter how many elements you want to store : ";
	cin>>n;
	int arr[n];
	cout<<"enter elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n how many times you want to rotate elements :";
	cin>>k;
	int ro[k];
	cout<<"enter the value of each";
	for(int i=0;i<k;i++){
		cin>>ro[i];
	}
	for(int i=0;i<k;i++){
		d = ro[i];
		rotateby(arr,n,d);
		
	}
	
	return 0;
}
