#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
class Solution{
	public:
	vector <int> rearrange(int arr[],int n){
		sort(arr,arr+n);
		vector<int> res;
		for(int i=0;i<n-2;i++){
			res.push_back(arr[i]);
		}
		return res;
	}
};
int main(){
	int n;
	cout<<"enter the no of element you want to store :";
	cin>>n;
	
	int arr[n];
	cout<<" enter element :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Solution ob;
	vector <int> res =ob.rearrange(arr,n);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}

}
