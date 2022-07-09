#include<iostream>
#include<algorithm>
using namespace std;
void smallestno(int arr[],int n,int k){
	sort(arr,arr+n);
	cout<<" the no is : "<<arr[k-1];
}
int main(){
	int n,k;
	cout<<"enter no of element you want to store :";
	cin>>n;
	int arr[n];
	cout<<"enter element "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n enter kth term of smallest no :";
	cin>>k;
	smallestno(arr,n,k);
}
