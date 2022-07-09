#include<iostream>
#include<algorithm>
#include<vector>
const int MAX = 10;
using namespace std;
void median(int matrix[][MAX],int n){
	int median =0;
	int t=n*n;
	int temp[t];
	int k=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp[k++]=matrix[i][j];
		}
	}
	sort(temp,temp+t);
	if(t%2==0){
		median = (temp[t/2]+temp[(t/2)+1])/2;
	}
	else{
		median = temp[t/2];
	}
	cout<<median;
}


int main(){
	int n;
	cout<<"enter number of cubic matrix you want :";
	cin>>n;
	int matrix[n][MAX];
	cout<<"enter element"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}
	median(matrix,n);
	
	
}
