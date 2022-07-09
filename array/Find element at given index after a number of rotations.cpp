#include<iostream>
using namespace std;
void reverse1(int arr[],int ro1[]);
void reverseby(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}
void reverse1(int arr[],int ro1[]){
	int s= ro1[0];
	int e=ro1[1];
	reverseby(arr,s,e);
	reverseby(arr,s+1,e);
}
void reverse2(int arr[],int ro2[]){
	int s= ro2[0];
	int e=ro2[1];
	reverseby(arr,s,e);
	reverseby(arr,s+1,e);
}
int main(){
	int n;
	cout<<"how many elements you want to store :";
	cin>>n;
	int arr[n];
	cout<<"\nenter elements :"<<endl;
	for(int i=0 ;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<endl;
	cout<<"enter rotation of range 1 :";
	int ro1[2];
	for(int i=0;i<2;i++){
		cin>>ro1[i];
	}
	cout<<endl;
	cout<<"enter rotation of range 2 :";
	int ro2[2];
	for(int i=0;i<2;i++){
		cin>>ro2[i];
	}
	int index =1;
	reverse1(arr,ro1);
	reverse2(arr,ro2);
	cout<<"\n element at index "<<index<<" is "<<arr[index];
	return 0;
}
	
