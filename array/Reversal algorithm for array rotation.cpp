#include<iostream>
using namespace std;
void rotateby(int arr[],int start ,int end){
	while(start<end){
	
	int temp = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    start++;
    end--;
}
}
void rotate(int arr[],int r , int a){

 if(r==0){
 	return;
 }
 r=r%a;
 rotateby(arr,0,r-1);
 rotateby(arr,r,a-1);
 rotateby(arr,0,a-1);
}
void print(int arr[],int a){
	for(int i =0;i<a;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n,a;
	
		int arr[a] , r;
		cout<<"enter how many element you want to store : ";
		cin>>a;
		for(int i=0;i<a;i++){
			cout<<"enter the elements of array : "<<endl;
			cin>>arr[i];
			
		}
		cout<<"how many elements you want to rotate :";
		cin>>r;
		rotate(arr,r,a);
		print(arr,a);
		
		
	
	return 0;
}
