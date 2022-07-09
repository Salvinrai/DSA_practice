#include<iostream>
#include<algorithm>
using namespace std;
void largest2d(int arr[4][4],int n,int k){
	int count =0;
	int t = n*n;
	int temp[t];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			temp[count++]=arr[i][j];
		}
	}
	sort(temp,temp+t,greater<int>());
	cout<<temp[k-1];
	
}
int main(){
	int k;
	int arr[4][4];
	cout<<"enter alement :"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	cout<<" enter the kth largest element :";
	cin>>k;
	largest2d(arr,4,k);
}
