#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int element){
	int low,high,mid;
	low =0;
	high = n-1;
	
	while(low<=high){
		mid = (low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]<element){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={2,5,7,22,99,100,104,233};
	int size = sizeof(arr)/sizeof(int);
	int element =1044;
	int index = binarysearch(arr,size,element);
	cout<<index;
	return 0;
}
