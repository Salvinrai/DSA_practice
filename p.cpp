#include<iostream>
using namespace std;
void rotate(int arr[],int s){
	int temp = arr[0];
	for(int i=0;i<s-1;i++){
		arr[i]=arr[i+1];
		
	}
	arr[s-1]=temp;
}
void rotateby(int arr[],int d, int s){
	for(int i=0;i<d;i++){
		rotate(arr,s);
	}
}
void print(int arr[],int s){
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
int n,d,s;
cout<<"enter no of element you want to store in array";
cin>>s;
int arr[s];
for(int i=0;i<s;i++){
	cin>>arr[i];
}
cout<<"enter no of times yu want to rotate : ";
cin>>d;

rotateby(arr,d,s);
print(arr,s);


}
