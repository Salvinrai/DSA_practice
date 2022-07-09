#include<iostream>
#include<algorithm>
using namespace std;
 
// A utility method to swap two numbers.
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// This function sorts arr[0..n-1] in wave form, i.e.,
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5]..
void sortInWave(int arr[], int n)
{
    // Sort the input array
    sort(arr, arr+n);
 
    // Swap adjacent elements
    for (int i=0; i<n-1; i += 2)
        swap(&arr[i], &arr[i+1]);
}
 
// Driver program to test above function
int main()
{
   int n;
   cout<<"enter no of element you want to store :";
   cin>>n;
   int arr[n];
   cout<<"enter element :";
   for(int i=0;i<n;i++){
   	cin>>arr[i];
   }
    sortInWave(arr, n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
