#include<iostream>
#include<algorithm>
#include<vector>
const int MAX = 10;
using namespace std;
void transpose(int matrix[][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(matrix[i][j],matrix[j][i]);
		}
	}
}
void print(int matrix[][MAX],int n){
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
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
	transpose(matrix,n);
	print(matrix,n);
	
}
