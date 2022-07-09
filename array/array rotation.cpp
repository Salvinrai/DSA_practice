#include<iostream>
using namespace std;
void rotateby(int ro[], int s){
int temp = ro[0];
for(int i=0;i<s-1;i++){
    ro[i]=ro[i+1];
}
ro[s-1]=temp;
}
void rotatearr(int ro[], int d, int s){
for(int i=0;i<d;i++)
{
    rotateby(ro ,s);
}

}
void printarr(int ro[],int s){
for(int i=0;i<s;i++){
    cout<<ro[i]<<" ";
}

}
int main(){
int n,d,s ;
int ro[s];
cout<<"no of array you want to store for rotation :"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"how many elements you want to store :" <<endl;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>ro[i];
    }
    cout<<"how many elements you want to rotate : "<<endl;
    cin>>d;
    rotatearr(ro,d,s);
    printarr(ro,s);

}

return 0;


}
