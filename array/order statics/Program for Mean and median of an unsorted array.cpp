#include<iostream>
#include<algorithm>
using namespace std;
double value(int arr[],int t){
	int ti=t+2;
	sort(arr,arr+ti);
	for(int i =0;i<t;i++){
		cout<<arr[i]<<" ";
	}
	double median_v=0;
	
	if(t%2!=0){
	 median_v = arr[t/2];
	}
	else{
	  median_v = (arr[t-1/2]+arr[t/2])/2.0;
	}
	cout<<" median is "<<median_v<<endl;
}
double median(int arr[],int n){
	int t=0;
	for(int i=0;i<n;i++){
		t =i;
		value(arr,t);
	}
}
int main(){
	int n;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	median(arr,n);
}
