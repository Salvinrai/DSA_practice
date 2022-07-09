#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
int temp[n];
for(int i=0;i<n;i++){
	temp[arr[i]]=i;
	}

for(int i=0;i<n;i++){
	arr[i]=temp[i];
	}
	

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
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
