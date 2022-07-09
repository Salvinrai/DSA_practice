#include<iostream>
using namespace std;
struct Query
{
    int L, R;
};
void printQuerySums(int arr[],int n, Query q[],int m){
	for(int j=0;j<m;j++){
	
	int start = q[j].L;
	int end =q[j].R;
	int sum=0;
	for(int i= start;i<=end;i++){
		sum = sum + arr[i];
	}
	cout<<sum<<endl;
}
}
int main(){
	int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(a)/sizeof(a[0]);
    Query q[] = {{0, 4}, {1, 3}, {2, 4}};
    int m = sizeof(q)/sizeof(q[0]);
    printQuerySums(a, n, q, m);
    return 0;
}
