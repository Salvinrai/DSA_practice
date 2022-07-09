#include<iostream>
using namespace std;
void reverse(int arr[],int k,int n);
void rotateby(int arr[],int start ,int end){
	while(start<end){
	
	int temp = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    start++;
    end--;
}
}
void reverse(int arr[],int k,int n){

 rotateby(arr,0,k-1);
 rotateby(arr,k,n-1);
 rotateby(arr,0,n-1);
}

void print(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	
	int arr[n]; 
	cout<<"enter how many element you want to store : ";
	cin>>n;
	cout<<"enter the elements of array : "<<endl;
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
			
	int k=2;
	reverse(arr,k,n);
    print(arr,n);
    return 0;
}
