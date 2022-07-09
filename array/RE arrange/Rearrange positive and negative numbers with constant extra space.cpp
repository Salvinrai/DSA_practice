#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{int count=0;
int temp[n];
for(int i=0;i<n;i++){
	if(arr[i]<0){
		temp[count++]=arr[i];
	}
}
for(int i=0;i<n;i++){
	if(arr[i]>=0){
		temp[count++]=arr[i];
	}
	
}
for(int i=0;i<n;i++){
	cout<<temp[i]<<" ";
	}
	
}

int main(){
	int n;
	cout<<"enter no of element you want to enter :";
	cin>>n;
	int arr[n];
	cout<<"enter elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	rearrange(arr,n);
}
